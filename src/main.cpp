#include "project/euroMillion.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv)
{
    std::cout << "Starting." << std::endl;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    EuroMillion euroMillion;

    int numberTry = atoi(argv[1]);
    euroMillion.checkIfWin(numberTry);
    return EXIT_SUCCESS;
}
