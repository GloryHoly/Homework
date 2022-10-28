#include <iostream>
#pragma once

class MyException : public std::exception 
{
public:
	MyException(const char* msg) : std::exception(msg) {};
};



