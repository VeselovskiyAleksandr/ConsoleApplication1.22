// ConsoleApplication1.22.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 2.

#include <iostream>
#include <fstream>
#include <vector>
using namespace std; 

int main()
{
	vector <string> text;
	ifstream Anthony_Hope_Rupert_Of_Hentzau;
	int count = 0, countWords=0, pageNumber=0;
	Anthony_Hope_Rupert_Of_Hentzau.open("C:\\Users\\Александр\\Documents\\text for program\\Anthony Hope Rupert Of Hentzau.txt");
	if (Anthony_Hope_Rupert_Of_Hentzau.is_open()) {
		cout << "The file is found \n";
	}
	else {
		cout << "\nThe file is not found";
	}
	while (!Anthony_Hope_Rupert_Of_Hentzau.eof()) {
		string word;
		Anthony_Hope_Rupert_Of_Hentzau >> word;
		text.push_back(word);
		count++;
	}
	cout << "Enter the number of page. ";
	cin >> pageNumber;  
// Anthony_Hope_Rupert_Of_Hentzau.gcount(); Как использовать этот метод я не понял.
	cout << "\n                                page " << pageNumber;
	cout<< "\n        ";
	 for (int i = 12 * 45 *(pageNumber-1); i < 12 * 45 * pageNumber; i++) {
		 if (pageNumber == 0) {
			 cout << "\n\n\n                        A N T O N Y    H O P E  ";
			cout << "\n\n                 R U P E R T   O F   H E N T Z A U \n\n";
			break;
		 }
		 else if (pageNumber > (count / 12) / 45 + 1) {
			 cout << "\n   In this text this page are absent.";
			 break;
		 }
		 if (i == count) {
			 break;
		 }
		 if (sizeof(text[i]) > 350 - countWords) {        //Для удобства чтения  
			 cout << "\n       ";                     //задаём количество слов в строке равным 12;
			 countWords = 0;                          //количество строк на странице равным 45
		 }
		 cout << text[i] << " ";
		countWords +=sizeof(text[i]) ;
	}
	 cout << "\n";
		Anthony_Hope_Rupert_Of_Hentzau.close();
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
