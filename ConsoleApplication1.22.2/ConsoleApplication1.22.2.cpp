// ConsoleApplication1.22.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 2.

#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	ifstream file;
	int pageNumber = 0, strNumber;
	char buffer[100];
file.open("C:\\users\\Александр\\Documents\\text for program\\Anthony Hope Rupert Of Hentzau.txt", ios::binary);	
    if (file.is_open()) {
		cout << "The file is open \n";
	}
	else {
		cerr << "\nThe file does not found";
		return 1;
	}	                    
	cout << "Enter the number of string on the pages";  //Для удобства чтения задаём длину строки равной 100;		                   
	cin >> strNumber;                                    //количество строк на странице задаёт пользователь.
	cout << "Enter the number of page. ";
	cin >> pageNumber;
		cout << "\n                                                       page " << pageNumber;
		cout<< "\n        ";
		file.seekg((pageNumber - 1) *99 * strNumber);  
		for(int i=0; i<strNumber; i++){
				file.read(buffer, sizeof(buffer) - 1);
			if (pageNumber == 0) {
				cout << "\n\n\n                                               A N T O N Y    H O P E  ";
				cout << "\n\n                                        R U P E R T   O F   H E N T Z A U \n\n";
				break;
			}
			if (file.gcount() == 99) {
				cout << "\n           ";
			}
				buffer[file.gcount()] = 0;
				cout << buffer;	
				if (buffer[file.gcount()]) {
					break;
				}
		}
		file.close();
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
