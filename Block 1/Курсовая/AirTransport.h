#include <iostream>
#pragma once

class AirTransport
{
protected:
	std::string name;
	double speed,
		coefficient,
		finishtime,
		distance;
	bool status;
public:
	AirTransport(double distance = 0, std::string name = "Transport", double speed = 0, double coefficient = 0, double finishtime = 0, bool status = false);
	
	virtual void set_status();
	virtual bool get_status();
	virtual std::string get_name();
	virtual double race();
};
