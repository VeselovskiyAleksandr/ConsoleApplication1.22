// ConsoleApplication1.22.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 4.Разработка детектора PNG-файла.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream tree;
	string path;
	int firstByte, meaning=-119;
    string detector = "PNG", heading, fileExtension;
	path = "C:\\Users\\Александр\\Documents\\text for program\\tree.png";
	fileExtension = path;
	tree.open(path);
	if (tree.is_open()) {
		cout << "\nThe file is open.";
	}
	else {
		cerr << "\nThe file does not found.";
		return 1;
	}	
	for (int i = 2; i >= 0; i--) {
		if (fileExtension.back() != detector[i]+32) {
			cout << "\nThis file has not type PNG";
			return 2;
		}
		else {
			fileExtension.pop_back();
		}
	}
	if (fileExtension.back()!='.') {
		cout << "\nThis file has not type PNG";
		return 3;
	}
	tree >> heading;
	firstByte = (int) heading[0];
	if (firstByte == meaning) {
		tree.seekg(1) >> heading;
		for (int i = 0; i < 3; i++) {
			if (heading[i] != detector[i]) {
				cout << "\nThis file has not type PNG";
				break;
			}
			else if (i==2){				
             cout << "\nThis file has type PNG";
			}
		}
	}
		else {
			cout << "\nThis file has not type PNG";
		}
	tree.close();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
