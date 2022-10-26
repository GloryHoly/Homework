#include "Exception.h"

const char* MyException::what() const { return "не был создан. Причина: сумма углов не равна 180"; }
