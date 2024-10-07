#include <iostream>
#include "calc.h"
#include "log.h"
using namespace std;

int main()
{
    int i = 3;
    int j = 2;
    Log();
    std::cout << Calc(i, j) << std::endl;
}
