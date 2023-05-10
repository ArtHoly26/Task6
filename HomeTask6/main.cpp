#include <iostream>
#include <string>
#include <ctime>

//ДЗ
//
//Задание.Написать имитацию кассового аппарата для магазина, торгующего новогодними товарами.
//Кассир должен выбрать товар из списка, ввести его количество, затем выбрать следующий товар.
//По завершению ввода вывести на экран всю сумму покупки.Предусмотреть наличие скидки.
//В списке товаров должно быть не меньше 4 - х товаров, должна отображаться их цена.
//Предусмотреть неправильно вводимые данные.
//Задание.Написать игру «Угадай число».Программа загадывает число в диапазоне от 1 до 500. 
//Пользователь пытается его угадать.После каждой попытки программа выдает подсказки, 
//больше или меньше его число загаданного.В конце программа выдает статистику : за сколько попыток угадано число.
//Предусмотреть выход по 0, в случае, если пользователю надоело угадывать число.

using namespace std;

//#define Task1
//#define Task2

int main()
{
	setlocale(LC_ALL, "Rus");
#ifdef Task1

	int sum = 0;
	int choise;
	bool flag = false;
	int price1 = 250;
	int price2 = 150;
	int price3 = 100;
	int price4 = 80;
	int price5 = 300;
	int quantity;
	do
	{
		cout << "Выберите товар из списка: " << endl
			<< "1 - Новогодняя гирлянда 5 м.- 250р" << endl
			<< "2 - Новогодние игрушки набор (8 шт) - 150р" << endl
			<< "3 - Бенгальские огни - 100р" << endl
			<< "4 - Новогодняя мишура 2 м - 80р." << endl
			<< "5 - Петарды << Корсар 5 >> - 300р " << endl
			<< "6 - Рассчитать" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "Введите колличество:" << endl;
			cin >> quantity;
			sum = sum + (price1 * quantity);
			break;
		case 2:
			cout << "Введите колличество:" << endl;
			cin >> quantity;
			sum = sum + (price2 * quantity);
			break;
		case 3:
			cout << "Введите колличество:" << endl;
			cin >> quantity;
			sum = sum + (price3 * quantity);
			break;
		case 4:
			cout << "Введите колличество:" << endl;
			cin >> quantity;
			sum = sum + (price4 * quantity);
			break;
		case 5:
			cout << "Введите колличество:" << endl;
			cin >> quantity;
			sum = sum + (price5 * quantity);
			break;
		case 6:
			flag = true;
			cout << "Сумма покупки равна: " << sum << endl;
			break;
		default:
			cout << "Такого товара нет в списке! Выберите другой товар." << endl;
			break;
		}
	} while (!flag);
#endif Task1

#ifdef Task2
	srand(time(NULL));
	int number1, number2;
	int record = 0;
	cout << "Добро пожаловать в игру угадай число!!!" << endl;
	number1 = rand() % (500 + 1) - 1;
	do
	{
		cout << "Введите загаданное число (от 1 до 500)" << endl
			 << "Чтоб выйти введите 0" << endl;
		cin >> number2;
		if (number2 > number1)
		{
			cout << "Загаданное число меньше введенного" << endl;
			record++;
			system("pause");
			system("cls");
		}
		else if (number2 < number1)
		{
			cout << "Загаданное число больше введенного" << endl;
			record++;
			system("pause");
			system("cls");
		}
		else if (number1 == number2)
		{
			cout << "Вы угадали число поздравляем!!!" << endl;
			system("pause");
			system("cls");
		}

	} while (!(number1==number2||number2==0));

	cout << "Число угаданно за " << record << " попыток" << endl;
#endif // Task2


}

