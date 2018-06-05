#pragma once

using namespace std;

class Bus
{
private:
	string	Brand;
	double	Bus_Number,
			Driver_Number;

public:
	Bus() 
	{
		Brand = "";
		Bus_Number = NULL;
		Driver_Number = NULL;
	}

	void Set_Brand(string brand);
	void Set_Bus_Number(double bus_number);
	void Set_Driver_Number(double driver_number);

	string Get_Brand();
	double Get_Bus_Number();
	double Get_Driver_number();
};

void Bus::Set_Brand(string brand)
{
	Brand = brand;
}

void Bus::Set_Bus_Number(double bus_number)
{
	Bus_Number = bus_number;
}

void Bus::Set_Driver_Number(double driver_number)
{
	Driver_Number = driver_number;
}


string Bus::Get_Brand()
{
	return Brand;
}

double Bus::Get_Bus_Number()
{
	return Bus_Number;
}

double Bus::Get_Driver_number()
{
	return Driver_Number;
}


