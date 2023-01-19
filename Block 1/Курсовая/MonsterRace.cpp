#include <windows.h>
#include "Camel.h"
#include "TurboCamel.h"
#include "Centaur.h"
#include "Boots.h"
#include "Metod.h"
#include "CarpetPlane.h"
#include "Eagle.h"
#include "Broom.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	int distance = 0,
		typerace = 0,
		regist = 0,
		typeTS = 0,
		start = 0,
		end = 1;

	do {
		do
		{
			HelloUser::print();
			std::cin >> typerace;
			if (typerace <= 0 || typerace > 3) { IncorrectCommand::print(); }
		} while (typerace <= 0 || typerace > 3);

		do
		{
			std::cout << "\nУкажите длину дистанции (должна быть положительная):";
			std::cin >> distance;
			if (distance < 0) { IncorrectCommand::print(); }
		} while (distance < 0);

		Camel camel(distance);
		TurboCamel turbocamel(distance);
		Centaur centaur(distance);
		Boots boots(distance);
		CarpetPlane carpetplane(distance);
		Eagle eagle(distance);
		Broom broom(distance);
		const int gsize = 4;
		const int airsize = 3;
		const int size = gsize + airsize;
		GroundTransport* gArr = new GroundTransport[gsize]{ camel, turbocamel, centaur, boots };
		AirTransport* airArr = new AirTransport[airsize]{ carpetplane, eagle, broom };
		double* timeArr = new double[size] {};
		std::string* nameArr = new std::string[size]
		{
			boots.get_name(),
			broom.get_name(),
			camel.get_name(),
			centaur.get_name(),
			eagle.get_name(),
			turbocamel.get_name(),
			carpetplane.get_name()

		};

		do
		{
			StartRegist::print();
			std::cin >> regist;
			std::cout << std::endl;
			if (regist != 1) { IncorrectCommand::print(); }
		} while (regist != 1);

		do
		{
			TSRegist::print(gArr, gsize, airArr, airsize, nameArr, size, distance, typerace);
			std::cin >> typeTS;
			if (typeTS > 0 && typeTS <= size) { StatusTS::print(gArr, gsize, airArr, airsize, nameArr, size, typeTS, typerace); }
			else if (typeTS == 0)
			{
				do
				{
					Start::print();
					std::cin >> start;
					if (start == 1) { typeTS = 1; }
					else if (start == 2)
					{
						if (Counter::gTS(gArr, gsize) + Counter::airTS(airArr, airsize) < 2) { std::cout << "\nТребуется зарегистрировать ещё одно транспортное средство " << std::endl; }
					}
					else { IncorrectCommand::print(); }
				} while (start < 1 || start > 2);
			}
			else { IncorrectCommand::print(); }
		} while (typeTS != 0);

		ARR::initial(gArr, gsize, airArr, airsize, timeArr, nameArr, typerace);
		ARR::sort(timeArr, nameArr, size);
		Winner::print(timeArr, nameArr, size);

		do
		{
			std::cout << "\n1. Провести ещё одну гонку!" << std::endl;
			std::cout << "2. Выйти!" << std::endl;
			std::cout << "Выберете действие" << std::endl;
			std::cin >> end;
			if (end < 1 || end > 2) { IncorrectCommand::print(); }
		} while (end < 1 || end > 2);

		ARR::dell(gArr, airArr, timeArr, nameArr);

	} while (end == 1);


	return 0;

}