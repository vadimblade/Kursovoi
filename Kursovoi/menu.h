#pragma once

using namespace std;

int authorization_info();	//Функция, выводящая строку с информацией об авторизации
int main_menu();			//Функция, выводящая главное меню
int dispatcher_menu();		//Функция, выводящая меню Диспетчера
int driver_menu();			//Функция, выводящая меню для Водителя
int admin_menu();			//Функция, выводящая меню для администраторов
int info_menu();			//Функция, выводящая меню с информацией о рейсах
int authorization_form();	//Функция, выводящая форму авторизации

int authorization_info() //На вход будет получать класс пользователя
{
	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));

	cout << "Вход не выполнен!";

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));

	return 0;
}

int main_menu()	//Главное меню
{
	authorization_info();

	while (1)
	{
		cout << endl;
		cout << "Главное меню ИС \"Автобусный парк\"(для навигации используйте цифры на клавиатуре).\n";
		cout << "1. Войти в учетную запись.\n";
		cout << "2. Посмотреть маршруты автобусных рейсов.";
		cout << "\n0. Выход.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 2)
		{
			return key;
		}
		else
		{
			system("cls");
			cout << "Выберите существущий пункт меню!";
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
		cout << "Меню Диспетчера (для навигации используйте цифры на клавиатуре).\n";
		cout << "1. Посмотреть маршруты автобусных рейсов.\n";
		cout << "2. Просмотр информации о водителях и их автобусах.\n";
		cout << "3. Просмотр информации о автобусах и их рейсах.\n";
		cout << "4. Переназначение водителей на автобусы.\n";
		cout << "5. Переназначение автобусов на маршруты\n";
		cout << "\n0. Выход.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 5)
		{
			return key;
		}
		else
		{
			system("cls");
			cout << "Выберите существущий пункт меню!";
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
		cout << "Меню Водителя (для навигации используйте цифры на клавиатуре).\n";
		cout << "1. Посмотреть маршруты автобусных рейсов.\n";
		cout << "2. Просмотр информации о водителях и их автобусах.\n";
		cout << "\n0. Выход.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 2)
		{
			return key;
		}
		else
		{
			system("cls");
			cout << "Выберите существущий пункт меню!";
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
		cout << "Меню Администратора (для навигации используйте цифры на клавиатуре).\n";
		cout << "1. Посмотреть маршруты автобусных рейсов.\n";
		cout << "2. Просмотр информации о водителях и их автобусах.\n";
		cout << "3. Просмотр информации о автобусах и их рейсах.\n";
		cout << "4. Переназначение водителей на автобусы.\n";
		cout << "5. Переназначение автобусов на маршруты\n";
		cout << "6. Добавление и удаление водителя.\n";
		cout << "\n0. Выход.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 6)
		{
			return key;
		}
		else
		{
			system("cls");
			cout << "Выберите существущий пункт меню!";
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
		cout << "Меню информации о рейсах (для навигации используйте цифры на клавиатуре).\n";
		cout << "1. Посмотреть маршруты автобусных рейсов.\n";
		cout << "\n0. Выход.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 1)
		{
			return key;
		}
		else
		{
			system("cls");
			cout << "Выберите существущий пункт меню!";
			Sleep(2000);
		}
	}
}

int authorization_form()
{
	authorization_info();
	cout << "Введите имя пользователя: ";
	string User_Name;
	cin >> User_Name;
	cout << "Введите пароль: ";
	string Password;
	cin >> Password;

	return 0;
}