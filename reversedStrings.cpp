// reversedStrings.cpp
// Brenton Ramirez Vargas
// 02/02/2025
// demo for CIT-66

#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::string user_input;
    std::cout << "Enter your name: ";
//for demonstration, we will use name. However, it can be changed to anything.
    std::getline(std::cin, user_input);

    std::reverse(user_input.begin(), user_input.end());
// this program will reverse your name
    std::cout << "Your name reversed is: " << user_input << std::endl;

    return 0;
}