#pragma once

using namespace std;

int authorization_info();	//�������, ��������� ������ � ����������� �� �����������
int main_menu();			//�������, ��������� ������� ����
int dispatcher_menu();		//�������, ��������� ���� ����������
int driver_menu();			//�������, ��������� ���� ��� ��������
int admin_menu();			//�������, ��������� ���� ��� ���������������
int info_menu();			//�������, ��������� ���� � ����������� � ������

int authorization_info() //�� ���� ����� �������� ����� ������������
{
	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));

	cout << "���� �� ��������!";

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
}

int main_menu()	//������� ����
{
	while (1)
	{
		cout << endl;
		cout << "������� ���� �� \"���������� ����\"(��� ��������� ����������� ����� �� ����������).\n";
		cout << "1. ����� � ������� ������ ����������.\n";
		cout << "2. ����� � ������� ������ ��������.\n";
		cout << "3. ����� � ������� ������ ��������������.\n";
		cout << "4. ���������� ���������� ���������� ������.";
		cout << "\n0. �����.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 4)
		{
			return key;
		}
		else
		{
			system("cls");
			cout << "�������� ����������� ����� ����!";
			Sleep(2000);
		}
	}
}

int dispatcher_menu()
{

}

int driver_menu()
{

}

int admin_menu()
{

}

int info_menu()
{

}