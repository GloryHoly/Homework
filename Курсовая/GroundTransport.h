#include <iostream>
#pragma once

class GroundTransport
{
protected: 
	std::string name;
	double speed,
			time,
			relax1,
			relax2,
			relax3,
			finishtime,
			distance;
	bool status;
public:
	GroundTransport(double distance = 0, std::string name = "Transport", double speed = 0, double time = 0, double relax1 = 0, double relax2 = 0, double relax3 = 0, double finishtime = 0,  bool status = false);
	
	virtual void set_status();
	virtual bool get_status();
	virtual std::string get_name();
	virtual double race();

	


	
};


