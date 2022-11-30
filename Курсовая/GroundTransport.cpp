#include "GroundTransport.h"

GroundTransport::GroundTransport(double distance, std::string name, double speed, double time, double relax1, double relax2, double relax3, double finishtime,  bool status)
{
	this->name = name;
	this->speed = speed;
	this->time = time;
	this->relax1 = relax1;
	this->relax2 = relax2;
	this->relax3 = relax3;
	this->status = status;
	this->distance = distance;
	this->finishtime = finishtime;
}

void GroundTransport::set_status()
{
	 this->status = true;
}
bool  GroundTransport::get_status() { return status; }
std::string GroundTransport::get_name(){ return name; }
double GroundTransport::race() 
{
	finishtime = distance / speed;
	if (distance / speed > time)
	{
		double count = finishtime / time;
		double c = count - static_cast<int>(count);
		if (c == 0) { count -= 1; }
		for (int i = 1; i <= count; i++)
		{
			if (i == 1) { finishtime += relax1; }
			if (i == 2) { finishtime += relax2; }
			if (i > 2) { finishtime += relax3; }
		}
		return finishtime;
	}
	else { return finishtime; }
};
