﻿// ConsoleApplication1.22.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 1.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 ifstream select;

void wordSearch( string word) {
	int  counter=0;	
	select.open("C:\\Users\\Александр\\Documents\\text for program\\select.txt");
	while (!select.eof()) {
      string textWord;
		select >> textWord;
		counter+=word== textWord;
		cout << textWord << " ";
	}
	cout << "\nIn this text there are " << counter << " specified words";
	select.close();
}

int main(){
	 string word;
	cout << "\nInput the word ";
	cin >> word;
	wordSearch(word);
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
