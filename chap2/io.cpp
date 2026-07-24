#include <iostream>
#include "io.h"

void writeAnswer(int a, int b) {
    int sumVals = a + b;
    std::cout << sumVals << "\n";
}

int readNumber() {
    int a;
    std::cin >> a;
    return a;
}