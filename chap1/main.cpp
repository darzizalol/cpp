#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout << "Enter another integer: ";
    std::cin >> b;

    int sum_val = a + b;
    int deduct_val = a - b;

    std::cout << a << " + " << b << " is " << sum_val << "\n";
    std::cout << a << " - " << b << " is " << deduct_val << "\n";

    return 0;
}