#include <iostream>
using namespace std;

double F(int k);

int main()
{
	double p, e;
	int k;

	cin >> e; // Ввод числа E

	k = 1;
	p = 0; // Переменная хранящая последнее значение последовательности


	while (!(F(k) - p <  e)) // Цикл который остановится если выполнится условие задачи
	{
		if (k > 100) break; // Защита от зацикливания
		p = F(k);
		k++;
	}

	cout << F(k) << endl; // Вывод первого значения которое удоволетворило условию задачи
	system("PAUSE");
	return 0;
}

double F(int k) // Функция возвращающая значение последовательности
{
	if (k == 0) return 0;
	else return (F(k - 1) + 1) / (F(k - 1) + 2);
}