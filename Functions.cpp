#include <iostream>
#include <string>

#include "Header.h"

void printEr(std::string text)
{
    std::cout << "\n\n==========\nERROR:" << text << "\n==========\n\n\n\a";
}

double getInput(std::string name)
{
    std::cout << "Enter " << name << ": ";

    double input{};
    std::cin >> input;

    if (input > 0)
        return input;
    else
        printEr("Enter only positive numbers!");
        return getInput(name);
}
