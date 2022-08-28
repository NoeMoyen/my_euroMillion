#include "project/euroMillion.hpp"

#include <iostream>
#include <cstring>
#include <string>

EuroMillion::EuroMillion()
{
}

EuroMillion::~EuroMillion()
{
}

void EuroMillion::generateNumber(void)
{
    this->_number = {};
    for (int i = 0; i < 5; i++)
    {
        this->_number.push_back(rand() % 50 + 1);
    }
}

void EuroMillion::generateStar(void)
{
    this->_star = {};
    for (int i = 0; i < 2; i++)
    {
        this->_star.push_back(rand() % 12 + 1);
    }
}

void EuroMillion::printNumber(void)
{
    std::cout << "Number: ";
    for (int i = 0; i < this->_number.size(); i++) {
        std::cout << this->_number[i] << " ";
    }
}

void EuroMillion::printStar(void)
{
    std::cout << "Star: ";
    for (int i = 0; i < this->_star.size(); i++) {
        std::cout << this->_star[i] << " ";
    }
}

void EuroMillion::checkDoublonNumber(void) {
    int j = 0;
    for (int i = 0; i < this->_number.size(); i++) {
        while (j < this->_number.size()) {
            if (this->_number[i] == this->_number[j] && i != j) {
                this->_number[i] = rand() % 12 + 1;
            }
            j++;
        }
        j = 0;
    }
    std::sort(this->_number.begin(), this->_number.end());
}

void EuroMillion::checkDoublonStar(void) {
    int j = 0;
    for (int i = 0; i < this->_star.size(); i++) {
        while (j < this->_star.size()) {
            if (this->_star[i] == this->_star[j] && i != j) {
                this->_star[i] = rand() % 12 + 1;
            }
            j++;
        }
        j = 0;
    }
    std::sort(this->_star.begin(), this->_star.end());
}

void EuroMillion::checkDoublonTirageNumber(void) {
    int j = 0;
    for (int i = 0; i < this->_tirageNumber.size(); i++) {
        while (j < this->_tirageNumber.size()) {
            if (this->_tirageNumber[i] == this->_tirageNumber[j] && i != j) {
                this->_tirageNumber[i] = rand() % 50 + 1;
            }
            j++;
        }
        j = 0;
    }
    std::sort(this->_tirageNumber.begin(), this->_tirageNumber.end());
}

void EuroMillion::checkDoublonTirageStar(void) {
    int j = 0;
    for (int i = 0; i < this->_tirageStar.size(); i++) {
        while (j < this->_tirageStar.size()) {
            if (this->_tirageStar[i] == this->_tirageStar[j] && i != j) {
                this->_tirageStar[i] = rand() % 12 + 1;
            }
            j++;
        }
        j = 0;
    }
    std::sort(this->_tirageStar.begin(), this->_tirageStar.end());
}

void EuroMillion::generateTirage(void) {
    this->_tirageNumber = {};
    this->_tirageStar = {};
    for (int i = 0; i < 5; i++) {
        this->_tirageNumber.push_back(rand() % 50 + 1);
    }

    for (int i = 0; i < 2; i++) {
        this->_tirageStar.push_back(rand() % 12 + 1);
    }
    checkDoublonTirageNumber();
    checkDoublonTirageStar();
}

void EuroMillion::checkIfWin(int tirageNumber)
{
    long long int count = 0;
    for (int i = 0; i < tirageNumber; i++) {
        while(1) {
            generateNumber();
            checkDoublonNumber();
            generateStar();
            checkDoublonStar();
            generateTirage();
            if (this->_number == this->_tirageNumber && this->_star == this->_tirageStar) {
                std::cout << "YOU WIN IN\t" << count << "\t\tTIRAGES !!!" << std::endl;
                this->_moyenne.push_back(count);
                printNumber();
                printStar();
                std::cout << "\tTirage: ";
                for (int i = 0; i < this->_tirageNumber.size(); i++) {
                    std::cout << this->_tirageNumber[i] << " ";
                }
                std::cout << "star: ";
                for (int i = 0; i < this->_tirageStar.size(); i++) {
                    std::cout << this->_tirageStar[i] << " ";
                }
                std::cout << std::endl;
                std::cout << std::endl;
                count = 0;
                break;
            }
            if (count == 10000000)
                std::cout << "10M try...\n";
            if (count == 30000000)
                std::cout << "30M try....\n";
            if (count == 60000000)
                std::cout << "60M try...\n";
            if (count == 90000000)
                std::cout << "90M try...\n";
            if (count == 1200000000)
                std::cout << "120M try...\n";
            if (count == 150000000)
                std::cout << "150M try...\n";
            count++;
        }
    }
    long long int sum = 0;
    for (int k = 0; k < this->_moyenne.size(); k++) {
        sum += this->_moyenne[k];
    }
    sum = sum / this->_moyenne.size();
    std::cout << "Moyenne: " << sum << std::endl;

}