#include <iostream>
#pragma once

class MyException : public std::exception 
{
public:
	const char* what() const override ;
};


