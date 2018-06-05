#pragma once

using namespace std;

class Routes
{
private:
	double	Bus_Number,
			Routes_Number;
public:
	Routes() 
	{
		Bus_Number = NULL;
		Routes_Number = NULL;
	}

	void Set_Bus_Number(double bus_number);
	void Set_Routes_Number(double routes_number);

	double Get_Bus_Number();
	double Get_Routes_Number();
};

void Routes::Set_Bus_Number(double bus_number)
{
	Bus_Number = bus_number;
}

void Routes::Set_Routes_Number(double routes_number)
{
	Routes_Number = routes_number;
}


double Routes::Get_Bus_Number()
{
	return Bus_Number;
}

double Routes::Get_Routes_Number()
{
	return Routes_Number;
}

