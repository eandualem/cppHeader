#include <iostream>
#include "fib.h"

int main()
{
    int range;
    std::cout << "Enter Range for Terms of Fibonacci Sequence: ";
    std::cin >> range;
    std::cout << "Fibonicci Series upto " << range << " Terms "<< std::endl;

    fib(range);
    return 0;
}