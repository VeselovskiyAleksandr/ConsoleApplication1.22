// ConsoleApplication1.22.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 3. Реализация программы чтения ведомости.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream payment_statement; 
    int payouts, maxPayout = 0, sumPayouts = 0, numberName, str = 0;
    string nameFamily[2];
    payment_statement.open("C:\\Users\\Александр\\Documents\\text for program\\payment statement.txt");
    if (payment_statement.is_open()) { 
      cout << "\nThe file is found. \n";
    }
    else {
        cerr << "\nThe file is not found. ";
        return 1;
    }
    while (!payment_statement.eof()) { 
      string name, family, payOut, date;  
       payment_statement >> name >> family >> payouts >> date;
        if (payouts > maxPayout) {
            maxPayout = payouts;
            nameFamily[0]=name;
            nameFamily[1]=family;
        }
        sumPayouts += payouts;
        payOut = to_string(payouts);
    }
    cout << "\nThe amount of payments is a " << sumPayouts << "\n";
    cout << "The maximum amount received was " << maxPayout << ". " << " This amount has been paid to " << nameFamily[0];
    cout<<" "<< nameFamily[1]<<"\n";
    payment_statement.close();
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
