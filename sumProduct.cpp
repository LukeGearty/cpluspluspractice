#include <iostream>

int main() {
    
    int num1;
    int num2;

    std::cout << "I will add and multiply two numbers together. Enter the first number: ";
    std::cin >> num1;
    std::cout << "Now enter the second number: ";
    std::cin >> num2;

    int sum = num1 + num2;
    int product = num1 * num2;

    std::cout << "The sum of " << num1 << " and " << num2 << " is equal to " << sum << '\n';
    std::cout << "The product of " << num1 << " and " << num2 << " is equal to " << product << '\n';


    return 0;
}