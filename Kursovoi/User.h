#pragma once

using namespace std;

class User
{
private:
	byte	Rights; //Права пользователя (1-Администратор, 2-Диспетчер, 3-Водитель, 0-Пользователь)
	string	Name,
			Middle_Name,
			Surname;
	double	Personal_Number,
			Bus_Number;

	string	User_Name,
			Password;
public:
	User() 
	{
		Rights = 0;
		Name = "";
		Middle_Name = "";
		Surname = "";
		Personal_Number = NULL;
		Bus_Number = NULL;

		User_Name = "";
		Password = "";
	}

	void Set_Rights(byte rights);
	void Set_Name(string name);
	void Set_Middle_Name(string middle_name);
	void Set_Surname(string surname);
	void Set_Personal_Number(double personal_number);
	void Set_Bus_Number(double bus_number);
	void Set_User_Name(string user_name);
	void Set_Password(string password);

	byte Get_Rights();
	string Get_Name();
	string Get_Middle_Name();
	string Get_Surname();
	double Get_Personal_Number();
	double Get_Bus_Number();
	string Get_User_Name();
	string Get_Password();

};

void User::Set_Rights(byte rights)
{
	Rights = rights;
}

void User::Set_Name(string name)
{
	Name = name;
}

void User::Set_Middle_Name(string middle_name)
{
	Middle_Name = middle_name;
}

void User::Set_Surname(string surname)
{
	Surname = surname;
}

void User::Set_Personal_Number(double personal_number)
{
	Personal_Number = personal_number;
}

void User::Set_Bus_Number(double bus_number)
{
	Bus_Number = bus_number;
}

void User::Set_User_Name(string user_name)
{
	User_Name = user_name;
}

void User::Set_Password(string password)
{
	Password = password;
}


byte User::Get_Rights()
{
	return Rights;
}

string User::Get_Name()
{
	return Name;
}

string User::Get_Middle_Name()
{
	return Middle_Name;
}

string User::Get_Surname()
{
	return Surname;
}

double User::Get_Personal_Number()
{
	return Personal_Number;
}

double User::Get_Bus_Number()
{
	return Bus_Number;
}

string User::Get_User_Name()
{
	return User_Name;
}

string User::Get_Password()
{
	return Password;
}
