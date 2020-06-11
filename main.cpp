#include <iostream>
#include "Calc.h"

using namespace std;

int main() {
    int sentinal = 0;
    do {
        std::cout << "Please enter the number of expressions you would like to store: " << std::endl;
        int values = 0;
        std::cin >> values;
        if (values < 1) {
            std::cout << "Error: Number of stored expressions must be positive" << std::endl;
        } else {
            Calc calc = Calc(values);
            for (size_t count = 0; count < values; count++) {
                double answer = 0;
                bool flag = true;
                while (flag) {
                    std::string userString;
                    std::cout << "Please enter your expression (Enter 'STOP' to halt the input stream): \n = " << answer << "+..." << std::endl;
                    std::cin >> userString;

                    if (userString == "STOP") {
                        calc.storedExpressions[calc.getStored()] = std::to_string(answer);
                        flag = false;
                        break;
                    }
                    std::cout << userString << " = " << calc.process(userString, answer) << " ";
                    answer = calc.process(userString, answer);
                }
                calc.setStored(calc.getStored() + 1);
            }

            calc.print();
            std::cout << "Press 1 to continue with another calculator, any other value to quit." << std::endl;
            std::cin >> sentinal;
        }
    }while(sentinal == 1);
    return 0;
}
