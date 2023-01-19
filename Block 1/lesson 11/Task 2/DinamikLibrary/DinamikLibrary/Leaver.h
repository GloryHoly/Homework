#include <iostream>
#pragma once
#ifdef DINAMIKLIBRARY_EXPORTS
#define DINAMIKLIBRARY_API __declspec(dllexport)
#else
#define DINAMIKLIBRARY_API __declspec(dllimport)
#endif

class Leaver
{
public:
	DINAMIKLIBRARY_API void leave(std::string name);
};
