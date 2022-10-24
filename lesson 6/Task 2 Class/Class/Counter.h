#include <iostream>
#pragma once

class Counter
{
private:
    int num;
public:

    char command1;
    char command2;
    char command3;
    char command4;

public:
    Counter();
   
    void set_num(int num);
    int get_sum();
    int get_diff();
    int get_result();
};
bool question(std::string q);
