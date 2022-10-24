#include <iostream>
#include "Counter.h"

Counter::Counter()
{
    num = 1; 
    command1 = '+';
    command2 = '-';
    command3 = '=';
    command4 = 'x';

}

void Counter::set_num(int num)
{
    this->num = num;
}
int Counter::get_sum() { return num++; }
int Counter::get_diff() { return num--; }
int Counter::get_result() { return num; }

bool question(std::string q)
{
    if (q == "да" || q == "Да"){return true;}
    else { return false; }
}


    

