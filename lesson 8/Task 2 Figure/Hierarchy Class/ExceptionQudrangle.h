#include <iostream>
#pragma once

class MyExceptionQudrengle : public std::exception
{
public:
	const char* what() const override;
};