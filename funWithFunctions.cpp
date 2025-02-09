// funWithFunctions.cpp
// dh 02/07/2025
// Brenton Ramirez Vargas
// Demo for CIT-66


#include <iostream>

int main() {

// getanIntFromTheUser

    int num1, num2, sum;
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;


// compareTwoInts

    if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << std::endl;
    } else if (num1 < num2) {
        std::cout << num1 << " is less than " << num2 << std::endl;
    } else {
        std::cout << num1 << " is equal to " << num2 << std::endl;
    }

// sumTwoInts

    sum = num1 + num2;
    std::cout << " The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}