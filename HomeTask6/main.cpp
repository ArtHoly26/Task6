#include <iostream>
#include <string>
#include <ctime>

//��
//
//�������.�������� �������� ��������� �������� ��� ��������, ���������� ����������� ��������.
//������ ������ ������� ����� �� ������, ������ ��� ����������, ����� ������� ��������� �����.
//�� ���������� ����� ������� �� ����� ��� ����� �������.������������� ������� ������.
//� ������ ������� ������ ���� �� ������ 4 - � �������, ������ ������������ �� ����.
//������������� ����������� �������� ������.
//�������.�������� ���� ������� �����.��������� ���������� ����� � ��������� �� 1 �� 500. 
//������������ �������� ��� �������.����� ������ ������� ��������� ������ ���������, 
//������ ��� ������ ��� ����� �����������.� ����� ��������� ������ ���������� : �� ������� ������� ������� �����.
//������������� ����� �� 0, � ������, ���� ������������ ������� ��������� �����.

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
		cout << "�������� ����� �� ������: " << endl
			<< "1 - ���������� �������� 5 �.- 250�" << endl
			<< "2 - ���������� ������� ����� (8 ��) - 150�" << endl
			<< "3 - ����������� ���� - 100�" << endl
			<< "4 - ���������� ������ 2 � - 80�." << endl
			<< "5 - ������� << ������ 5 >> - 300� " << endl
			<< "6 - ����������" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "������� �����������:" << endl;
			cin >> quantity;
			sum = sum + (price1 * quantity);
			break;
		case 2:
			cout << "������� �����������:" << endl;
			cin >> quantity;
			sum = sum + (price2 * quantity);
			break;
		case 3:
			cout << "������� �����������:" << endl;
			cin >> quantity;
			sum = sum + (price3 * quantity);
			break;
		case 4:
			cout << "������� �����������:" << endl;
			cin >> quantity;
			sum = sum + (price4 * quantity);
			break;
		case 5:
			cout << "������� �����������:" << endl;
			cin >> quantity;
			sum = sum + (price5 * quantity);
			break;
		case 6:
			flag = true;
			cout << "����� ������� �����: " << sum << endl;
			break;
		default:
			cout << "������ ������ ��� � ������! �������� ������ �����." << endl;
			break;
		}
	} while (!flag);
#endif Task1

#ifdef Task2
	srand(time(NULL));
	int number1, number2;
	int record = 0;
	cout << "����� ���������� � ���� ������ �����!!!" << endl;
	number1 = rand() % (500 + 1) - 1;
	do
	{
		cout << "������� ���������� ����� (�� 1 �� 500)" << endl
			 << "���� ����� ������� 0" << endl;
		cin >> number2;
		if (number2 > number1)
		{
			cout << "���������� ����� ������ ����������" << endl;
			record++;
			system("pause");
			system("cls");
		}
		else if (number2 < number1)
		{
			cout << "���������� ����� ������ ����������" << endl;
			record++;
			system("pause");
			system("cls");
		}
		else if (number1 == number2)
		{
			cout << "�� ������� ����� �����������!!!" << endl;
			system("pause");
			system("cls");
		}

	} while (!(number1==number2||number2==0));

	cout << "����� �������� �� " << record << " �������" << endl;
#endif // Task2


}

