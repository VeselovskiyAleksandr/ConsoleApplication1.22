// ConsoleApplication1.22.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 19. Задача 5. Реализация игры "Что? Где? Когда?"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ifstream file;
	char buffer[79];
	int experts = 0, tvwiewers = 0, drum = 0, n=0;
    vector <int> motion = {14};
	string answer;
	file.open("C:\\Users\\Александр\\Documents\\text for program\\what where when.txt", ios::binary);
	if (file.is_open()) {
		cout << "The file is open"; 
	}
	else {
		cerr << "\nThe file does not found";
		return 1;
	}
	file.seekg(0);
	while(experts<6||tvwiewers<6){		
	cout << "\nSpin the drum (enter are number from 1 to 13) ";
	do {
		cin >> drum;
		if (drum < 1 || drum>13) {
			cout << "\nRotate the drum correctly. ";
		}
	} while (drum < 1 || drum > 13);
	int i = 0;
	do {
		if (drum == motion[i]) {
			drum++;
			i = 0;
}
		i++;
	} while (i<=n);
	motion.push_back(drum);
	n++;
	file.seekg(2 * (drum - 1) * 79);
	file.read(buffer, sizeof(buffer) - 1);
	buffer[file.gcount()] = 0;
	cout << buffer;
	cout << "\nEnter the answer ";
	cin >> answer;
	file.seekg((2 * drum - 1) * 79);
	file.read(buffer, sizeof(buffer) - 1);
	buffer[file.gcount()] = 0;
    cout << "\nAttention! The right answer: " << buffer;
	if (answer[0] == buffer[0]) {
		experts++;
	}
	else {
		tvwiewers++;
	}
	if (experts == 6) {
		cout << "\nThe victory is for experts! ";
		break;
	}
	if (tvwiewers == 6) {
		cout << "\nThe victory is for tvwiewers! ";
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
