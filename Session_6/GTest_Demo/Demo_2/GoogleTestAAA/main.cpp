#include <iostream>
#include "LibraryCode.hpp"


int main(int argc, char **argv)
{
    std::cout << "Actual application code \n";
 
    std::vector<int> myvec{1, 2, 3, 4,-5,-6,-8, 9, 10};

    std::cout << "how many positive numbers: " << countPositives(myvec) << std::endl;
    return 0;
}