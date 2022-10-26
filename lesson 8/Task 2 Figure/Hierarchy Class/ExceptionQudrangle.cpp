#include "ExceptionQudrangle.h"

const char* MyExceptionQudrengle::what() const { return "не был создан. Причина: сумма углов не равна 360"; }