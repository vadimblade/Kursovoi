#pragma once

using namespace std;

int authorization_info();	//Функция, выводящая строку с информацией об авторизации
int main_menu();			//Функция, выводящая главное меню
int dispatcher_menu();		//Функция, выводящая меню Диспетчера
int driver_menu();			//Функция, выводящая меню для Водителя
int admin_menu();			//Функция, выводящая меню для администраторов
int info_menu();			//Функция, выводящая меню с информацией о рейсах

int authorization_info() //На вход будет получать класс пользователя
{
	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));

	cout << "Вход не выполнен!";

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
}

int main_menu()	//Главное меню
{
	while (1)
	{
		cout << endl;
		cout << "Главное меню ИС \"Автобусный парк\"(для навигации используйте цифры на клавиатуре).\n";
		cout << "1. Войти в учетную запись Диспетчера.\n";
		cout << "2. Войти в учетную запись Водителя.\n";
		cout << "3. Войти в учетную запись администратора.\n";
		cout << "4. Посмотреть расписание автобусных рейсов.";
		cout << "\n0. Выход.";

		char key = _getch() - 48;

		if (key >= 0 && key <= 4)
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