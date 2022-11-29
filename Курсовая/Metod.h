#include <iostream>
#include "GroundTransport.h"
#include "AirTransport.h"
#pragma once

namespace HelloUser { void print(); }
namespace IncorrectCommand { void print(); }
namespace StartRegist { void print(); }
namespace TSRegist { void print(GroundTransport* gArr, int gsize, AirTransport* airArr, int airsize, std::string* nameArr, int size, int distance, int typerace); }
namespace Start { void print(); }
namespace StatusTS { void print(GroundTransport* gArr, int gsize, AirTransport* airArr, int airsize, std::string* nameArr, int size, int typeTS, int typerace); }
namespace Counter 
{ 
	int gTS(GroundTransport* arr, int size);
	int airTS(AirTransport* arr, int size);
}
namespace Winner { void print(double* timeArr, std::string* nameArr, int size); }
namespace ARR 
{	void initial(GroundTransport* gArr, int gsize, AirTransport* airArr, int airsize, double* timeArr, std::string* nameArr, int typerace);
	void sort(double* timeArr, std::string* nameArr, int size);
	void dell(GroundTransport* gArr, AirTransport* airArr, double* timeArr, std::string* nameArr);
}

