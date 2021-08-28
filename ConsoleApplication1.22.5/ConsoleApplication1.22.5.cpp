// ConsoleApplication1.22.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 5. Реализация игры "Что? Где? Когда?"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file;
	char buffer[75];
	int experts = 0, tvwiewers = 0, drum=0;
	string answers, test = "yes, yes, yes, yes, no, yes, yes, no, yes, yes, yes, no, no ";
	file.open("C:\\Users\\Александр\\Documents\\text for program\\what where when.txt");
	if (file.is_open()) {
		cout << "The file is open";
	}
	else {
		cerr << "\nThe file does not found";
	}
	file.read(buffer, sizeof(buffer) - 1);
	
	file.seekg(0);
	cout << "\nSpin the drum (enter are number from 1 to 13) ";
	cin >> drum;
	file.seekg(drum-1);
	buffer[file.gcount()] = 0;
	file >> answers;
	cout<<"\n" <<answers;
	file.close();
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
