#pragma once

using namespace std;

int authorization_info();	//�������, ��������� ������ � ����������� �� �����������
int main_menu();			//�������, ��������� ������� ����
int dispatcher_menu();		//�������, ��������� ���� ����������
int driver_menu();			//�������, ��������� ���� ��� ��������
int admin_menu();			//�������, ��������� ���� ��� ���������������
int info_menu();			//�������, ��������� ���� � ����������� � ������
int authorization_form();	//�������, ��������� ����� �����������

int authorization_info() //�� ���� ����� �������� ����� ������������
{
	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));

	cout << "���� �� ��������!";

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

	return 0;
}

int main_menu()	//������� ����
{
	authorization_info();

	while (1)
	{
		cout << endl;
		cout << "������� ���� �� \"���������� ����\"(��� ��������� ����������� ����� �� ����������).\n";
		cout << "1. ����� � ������� ������.\n";
		cout << "2. ���������� �������� ���������� ������.";
		cout << "\n0. �����.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 2)
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
	authorization_info();

	while (1)
	{
		cout << endl;
		cout << "���� ���������� (��� ��������� ����������� ����� �� ����������).\n";
		cout << "1. ���������� �������� ���������� ������.\n";
		cout << "2. �������� ���������� � ��������� � �� ���������.\n";
		cout << "3. �������� ���������� � ��������� � �� ������.\n";
		cout << "4. �������������� ��������� �� ��������.\n";
		cout << "5. �������������� ��������� �� ��������\n";
		cout << "\n0. �����.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 5)
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

int driver_menu()
{
	authorization_info();

	while (1)
	{
		cout << endl;
		cout << "���� �������� (��� ��������� ����������� ����� �� ����������).\n";
		cout << "1. ���������� �������� ���������� ������.\n";
		cout << "2. �������� ���������� � ��������� � �� ���������.\n";
		cout << "\n0. �����.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 2)
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

int admin_menu()
{
	authorization_info();

	while (1)
	{
		cout << endl;
		cout << "���� �������������� (��� ��������� ����������� ����� �� ����������).\n";
		cout << "1. ���������� �������� ���������� ������.\n";
		cout << "2. �������� ���������� � ��������� � �� ���������.\n";
		cout << "3. �������� ���������� � ��������� � �� ������.\n";
		cout << "4. �������������� ��������� �� ��������.\n";
		cout << "5. �������������� ��������� �� ��������\n";
		cout << "6. ���������� � �������� ��������.\n";
		cout << "\n0. �����.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 6)
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

int info_menu()
{
	authorization_info();

	while (1)
	{
		cout << endl;
		cout << "���� ���������� � ������ (��� ��������� ����������� ����� �� ����������).\n";
		cout << "1. ���������� �������� ���������� ������.\n";
		cout << "\n0. �����.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 1)
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

int authorization_form()
{
	authorization_info();
	cout << "������� ��� ������������: ";
	string User_Name;
	cin >> User_Name;
	cout << "������� ������: ";
	string Password;
	cin >> Password;

	return 0;
}