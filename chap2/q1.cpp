/*Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

    A function named “readNumber” should be used to get (and return) a single integer from the user.
    A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
    A main() function should be used to glue the above functions together.

*/ 

#include <iostream>
#include "io.h"

int main() {
    int v1, v2;
    std::cout << "Give me a first val: ";
    v1 = readNumber();
    
    std::cout << "Now, give me a second val: ";
    v2 = readNumber();

    writeAnswer(v1, v2);
    return 0;
}