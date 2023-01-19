#include "AirTransport.h"

AirTransport::AirTransport(double distance, std::string name, double speed, double coefficient, double finishtime, bool status)
{
	this->name = name;
	this->speed = speed;
	this->coefficient = coefficient;
	this->status = status;
	this->distance = distance;
	this->finishtime = finishtime;
}


void AirTransport::set_status()
{
	this->status = true;
}
bool  AirTransport::get_status() { return status; }
std::string AirTransport::get_name() { return name; }
double AirTransport::race(){ return finishtime = (distance * coefficient) / speed; };