/*
Пользователь 	вводит с клавиатуры сумму в гривнах и 	курс доллара, евро и рубля.Посчитать, сколько пользователь сможет купить 	долларов, евро и рублей.
а) Количество долларов, евро и рублей должно быть целым(мелочь не выдают).Пересчитать задачу, дополнительно вывести на экран сдачу в гривнах.
*/
#include <iostream>
using namespace std;
int main()
{
	double UAH, USD, EUR, RUB;
	cout << "Enter UAH: ";
	cin >> UAH;
	cout << "USD exchange rate: ";
	cin >> USD;
	cout << "EUR exchange rate: ";
	cin >> EUR;
	cout << "RUB exchange rate: ";
	cin >> RUB;
	int valut = UAH / USD;
	double ost = UAH - valut * USD;
	cout << valut << " USD and you have " << ost << " UAH" << endl;
	valut = UAH / EUR;
	ost = UAH - valut * EUR;
	cout << valut << " EUR and you have " << ost << " UAH" << endl;
	valut = UAH / RUB;
	ost = UAH - valut * RUB;
	cout << valut << " RUB and you have " << ost << " UAH" << endl;
}
