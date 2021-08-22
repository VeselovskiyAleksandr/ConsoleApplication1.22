// ConsoleApplication1.22.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 2.

#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	ifstream Anthony_Hope_Rupert_Of_Hentzau;
	int pageNumber = 0;
	char buffer[100];
	Anthony_Hope_Rupert_Of_Hentzau.open("C:\\users\\Александр\\Documents\\text for program\\Anthony Hope Rupert Of Hentzau.txt", ios::binary);
    if (Anthony_Hope_Rupert_Of_Hentzau.is_open()) {
		cerr << "The file is found \n";
	}
	else {
		cerr << "\nThe file does not found";
	}
	cout << "Enter the number of page. ";
	cin >> pageNumber;
		cout << "\n                                                       page " << pageNumber;
		cout<< "\n        ";
		if (pageNumber > 3) {
			cout << "\nIn this text page " << pageNumber << " are absent.";
		}
			Anthony_Hope_Rupert_Of_Hentzau.seekg((pageNumber - 1) * 99 * 43, Anthony_Hope_Rupert_Of_Hentzau.beg);
     //Для удобства чтения задаём длину строки равной 100;
	 //количество строк на странице равным 43.
		for(int i=0; i<43; i++){
				Anthony_Hope_Rupert_Of_Hentzau.read(buffer, sizeof(buffer) - 1);
			if (pageNumber == 0) {
				cout << "\n\n\n                                               A N T O N Y    H O P E  ";
				cout << "\n\n                                        R U P E R T   O F   H E N T Z A U \n\n";
				break;
			}
			if (Anthony_Hope_Rupert_Of_Hentzau.gcount() == 99) {
				cout << "\n           ";
			}
				buffer[Anthony_Hope_Rupert_Of_Hentzau.gcount()] = 0;
				cout << buffer;				
		}
		Anthony_Hope_Rupert_Of_Hentzau.close();
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
