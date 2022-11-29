#include "Metod.h"

void HelloUser::print()
{
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	std::cout << "1. Гонка для наземного транспорта." << std::endl;
	std::cout << "2. Гонка для воздушного транспорта." << std::endl;
	std::cout << "3. Гонка для наземного и воздушного транспорта." << std::endl;
	std::cout << "Выберете тип гонки:";
}
void IncorrectCommand::print(){std::cout << "\nНекорректная команда! " << std::endl;}
void StartRegist::print() 
{ 
	std::cout << "\nДолжно быть зарегестрированно хотя бы 2 транспортных средства" << std::endl;
	std::cout << "1. Зарегестрировать транспорт" << std::endl;
	std::cout << "Выбирете команду: ";
}
void TSRegist::print(GroundTransport* gArr, int gsize, AirTransport* airArr, int airsize, std::string* nameArr, int size, int distance, int typerace)
{ 
	switch (typerace)
	{
	case 1:
		std::cout << "Гонка для наземного транспорта. ";
		std::cout << "Расстояние: " << distance << std::endl;
		if (Counter::gTS(gArr, gsize) > 0)
		{
			std::cout << "Зарегистрированные транспортные средства: ";
			for (int i = 0; i < gsize; i++)
			{
				if (gArr[i].get_status())
				{
					std::cout << gArr[i].get_name() << ", ";
				}
			}
		}
		break;
	case 2:
		std::cout << "Гонка воздушного транспорта. ";
		std::cout << "Расстояние: " << distance << std::endl;
		if (Counter::airTS(airArr, airsize) > 0)
		{
			std::cout << "Зарегистрированные транспортные средства: ";
			for (int i = 0; i < airsize; i++)
			{
				if (airArr[i].get_status())
				{
					std::cout << airArr[i].get_name() << ", ";
				}
			}
		}
		break;
	case 3:
		std::cout << "Гонка наземного и воздушного транспорта. ";
		std::cout << "Расстояние: " << distance << std::endl;
		if (Counter::gTS(gArr, gsize) > 0 || Counter::airTS(airArr, airsize) > 0)
		{
			std::cout << "Зарегистрированные транспортные средства: ";
			for (int i = 0; i < gsize; i++)
			{
				if (gArr[i].get_status())
				{
					std::cout << gArr[i].get_name() << ", ";
				}
			}
			for (int i = 0; i < airsize; i++)
			{
				if (airArr[i].get_status())
				{
					std::cout << airArr[i].get_name() << ", ";
				}
			}
		}
		break;
	default:
		break;
	}
	std::cout << std::endl;

	for (int i = 0; i < size; i++) 
	{
		std::cout << i+1 <<". " << nameArr[i] << std::endl;
	}
	std::cout << "0. Закончить регистрацию." << std::endl;
	std::cout << "Выберете транспорт или 0 для окончания процесса регистрации: ";
}
void Start::print() 
{
	
	std::cout << "\n1. Зарегистрировать транспорт."  << std::endl;
	std::cout << "2. Начать гонку." << std::endl;	
}
void StatusTS::print(GroundTransport* gArr, int gsize, AirTransport* airArr, int airsize, std::string* nameArr, int size, int typeTS, int typerace)
{
	switch (typerace)
	{
	case 1:
		for (int i = 0; i < gsize; i++)
		{
			if (nameArr[typeTS - 1] == gArr[i].get_name() && gArr[i].get_status() == false)
			{
				gArr[i].set_status();
				std::cout << "\n" << nameArr[typeTS - 1] << " успешно зарегистрирован : " << std::endl;
				break;
			}
			else if (nameArr[typeTS - 1] == gArr[i].get_name() && gArr[i].get_status()) { std::cout << "\n" << nameArr[typeTS - 1] << " уже зарегистрирован : " << std::endl; break; }
			else if (nameArr[typeTS - 1] == airArr[i].get_name()) {
				std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства!" << std::endl; break;
			}
		}
		break;
	case 2:
		for (int i = 0; i < airsize; i++)
		{
			if (nameArr[typeTS - 1] == airArr[i].get_name() && airArr[i].get_status() == false)
			{
				airArr[i].set_status();
				std::cout << "\n" << nameArr[typeTS - 1] << " успешно зарегистрирован : " << std::endl;
				break;
			}
			else if (nameArr[typeTS - 1] == airArr[i].get_name() && airArr[i].get_status()) { std::cout << "\n" << nameArr[typeTS - 1] << " уже зарегистрирован : " << std::endl; break; }
		}
		for (int i = 0; i < gsize; i++)
		{
			if (nameArr[typeTS - 1] == gArr[i].get_name())
			{
				std::cout << "\nПопытка зарегистрировать неправильный тип транспортного средства!" << std::endl; break;
			}
		}
		break;
	case 3:
		for (int i = 0; i < gsize; i++)
		{
			if (nameArr[typeTS - 1] == gArr[i].get_name() && gArr[i].get_status() == false)
			{
				gArr[i].set_status();
				std::cout << "\n" << nameArr[typeTS - 1] << " успешно зарегистрирован : " << std::endl;
				break;
			}
			else if (nameArr[typeTS - 1] == gArr[i].get_name() && gArr[i].get_status()) { std::cout << "\n" << nameArr[typeTS - 1] << " уже зарегистрирован : " << std::endl; break; }
		}

		for (int i = 0; i < airsize; i++)
		{
			if (nameArr[typeTS - 1] == airArr[i].get_name() && airArr[i].get_status() == false)
			{
				airArr[i].set_status();
				std::cout << "\n" << nameArr[typeTS - 1] << " успешно зарегистрирован : " << std::endl;
				break;
			}
			else if (nameArr[typeTS - 1] == airArr[i].get_name() && airArr[i].get_status()) { std::cout << "\n" << nameArr[typeTS - 1] << " уже зарегистрирован : " << std::endl; break; }
		}
		break;
	default:
		break;
	}

}
int Counter::gTS(GroundTransport* arr, int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i].get_status()) { counter++; };
	}
	return counter;
}
int Counter::airTS(AirTransport* arr, int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i].get_status()) { counter++; };
	}
	return counter;
}
void ARR::initial(GroundTransport* gArr, int gsize, AirTransport* airArr, int airsize, double* timeArr, std::string* nameArr,int typerace )
{
	switch (typerace)
	{
	case 1:
		for (int i = 0; i < gsize; i++)
		{
			if (gArr[i].get_status())
			{
				timeArr[i] = gArr[i].race();
				nameArr[i] = gArr[i].get_name();
			}
		}
		break;
	case 2:
		for (int i = 0; i < airsize; i++)
		{
			if (airArr[i].get_status())
			{
				timeArr[i] = airArr[i].race();
				nameArr[i] = airArr[i].get_name();
			}
		}
		break;
	case 3:
			for(int a = 0; a < airsize; a++)
			if (airArr[a].get_status())
			{
				timeArr[a] = airArr[a].race();
				nameArr[a] = airArr[a].get_name();
			}
			for (int g = 0; g < gsize; g++)
				if (gArr[g].get_status())
				{
					timeArr[airsize + g] = gArr[g].race();
					nameArr[airsize + g] = gArr[g].get_name();
				}
			break;		
	default:
		break;
	}
	
}
void ARR::sort(double* timeArr, std::string* nameArr, int size)
{
	bool swapped;
	do
	{
		swapped = false;
		for (int i = 1; i < size; i++)
		{
			if (timeArr[i - 1] > timeArr[i])
			{
				double min = timeArr[i - 1];
				std::string name = nameArr[i - 1];
				timeArr[i - 1] = timeArr[i];
				nameArr[i - 1] = nameArr[i];
				timeArr[i] = min;
				nameArr[i] = name;
				swapped = true;
			}
		}
	} while (swapped);
}
void Winner::print(double* timeArr, std::string* nameArr, int size)
{
	int j = 1;
	std::cout << "\nРезультаты гонки:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (timeArr[i] != 0)
		{
			std::cout << j << ". " << nameArr[i] << ". Время: " << timeArr[i] << std::endl;
			j++;
		}		
	}
}
void ARR::dell(GroundTransport* gArr, AirTransport* airArr, double* timeArr, std::string* nameArr)
{
	delete[] gArr;
	delete[] airArr;
	delete[] timeArr;
	delete[] nameArr;
}
