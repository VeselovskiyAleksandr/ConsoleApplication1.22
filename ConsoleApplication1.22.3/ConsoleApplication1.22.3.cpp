// ConsoleApplication1.22.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 3. Реализация программы чтения ведомости.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    ifstream payment_statement;
    vector <string> text;  
    int payouts, maxPayout = 0, sumPayouts = 0, numberName, str = 0;
    payment_statement.open("C:\\Users\\Александр\\Documents\\text for program\\payment statement.txt");
    if (payment_statement.is_open()) { 
      cout << "\nThe file is found. \n\n";
    }
    else {
        cout << "\nThe file is not found. ";
    }
    while (!payment_statement.eof()) { 
      string name, date, family, payOut;
       payment_statement >> name >> family >> payouts >> date;
        if (payouts > maxPayout) {
            maxPayout = payouts;
            numberName = str + 1;
        }
        sumPayouts += payouts;
        payOut = to_string(payouts);
        text.push_back(name);
        text.push_back(family);
        text.push_back(payOut);
        text.push_back(date);
        str += 4;
    }
    for (int i = 0; i < str-4; i++) {
        if (i > 0 && (i % 4 == 0)) {
            cout << "\n";
        }
        cout << text[i] << " ";      
    }
    cout << "\n\nThe amount of payments is a " << sumPayouts << "\n";
    cout << "The maximum amount received was " << maxPayout << ". " << " This amount has been paid to ";
    cout<< text[numberName-1]<<" "<<text[numberName];
payment_statement.close();
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
