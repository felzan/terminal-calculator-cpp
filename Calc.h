#ifndef TERMINAL_CALCULATOR_CALC_H
#define TERMINAL_CALCULATOR_CALC_H


#include <string>

class Calc {
public:
    std::string* storedExpressions;

    Calc(int val);
    Calc(const Calc &);
    ~Calc();
    const Calc &operator=(const Calc &rhs);
    double process(std::string userInput, double prevValue);
    void print();
    void setStored(size_t newStored);
    size_t getStored();

private:
    size_t stored;
};


#endif //TERMINAL_CALCULATOR_CALC_H
