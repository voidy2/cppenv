/**
 * @file main.cpp
 * @brief main.cpp
 */
#include <iostream>

#include "Calc.h"

/**
 * @brief main
 */
int main(int argc, char const* argv[])
{
    Calc* calc = new Calc();
    std::cout << calc->add(1, 2) << std::endl;
    delete calc;
    return 0;
}
