// largestOfThree.cpp
// dh 02/09/2025
// Brenton Ramirez-Vargas
// demo for CIT-66


#include <iostream>

int main()
{
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        std::cout << "The largest number is: " << num1 << std::endl;

    } else if (num2 > num1 && num2 > num3) {
        std::cout << "The largest number is: " << num2 << std::endl;

    } else
        std::cout << "The largest number is: " << num3 << std::endl;

return 0;

}


