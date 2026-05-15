#include <iostream>
#include "factorial.h"

int main()
{
    int num;
    std::cin>>num;

    long long factorialResult=calculate(num);
    std::cout<<factorialResult;

    return 0;
}