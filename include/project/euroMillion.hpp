#ifndef PROJECT_WORLD_
#define PROJECT_WORLD_
#include <string>
#include <vector>
#include <algorithm>
class EuroMillion {
  private:
    std::vector<int> _number;
    std::vector<int> _star;
    std::vector<int> _tirageNumber;
    std::vector<int> _tirageStar;
    std::vector<long long int> _moyenne;
  public:
    EuroMillion();
    ~EuroMillion();
    void generateNumber(void);
    void generateStar(void);
    void printNumber(void);
    void printStar(void);
    void checkDoublonNumber(void);
    void checkDoublonStar(void);
    void checkDoublonTirageNumber(void);
    void checkDoublonTirageStar(void);
    void generateTirage(void);
    void checkIfWin(int tirageNumber);
};

#endif

