#include "project/euroMillion.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "Starting." << std::endl;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    EuroMillion euroMillion;
    std::cout << "generating Numbers." << std::endl;
    euroMillion.generateNumber();
    std::cout << "generating Star." << std::endl;
    euroMillion.generateStar();
    std::cout << "checkDoublonNumber." << std::endl;
    euroMillion.checkDoublonNumber();
    std::cout << "checkDoublonStar." << std::endl;
    euroMillion.checkDoublonStar();
    euroMillion.checkIfWin(40);
    return EXIT_SUCCESS;
}
