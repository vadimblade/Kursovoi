#pragma once

using namespace std;

class User
{
public:
	User()
	{
		byte Rights; //Права пользователя (1-Администратор, 2-Диспетчер, 3-Водитель, 0-Пользователь)
		string Name, Middle_Name, Surname;
		double Personal_Number, Bus_Number;
	}
};

