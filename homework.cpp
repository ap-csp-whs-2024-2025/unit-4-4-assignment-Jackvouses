#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    
    // Problem 1
    int number;
    std::cout << "Enter a number from 1 to 100: ";
    std::cin >> number;

    while (number < 1 || number > 100)
    {
        std::cout << "Invalid number entered. Please enter a number from 1 to 100: ";
        std::cin >> number;
    }
    std::cout << "Thank you!" << std::endl;
    
    // Problem 2
    std::string favoriteColor = "blue";
    std::string guess;
    int attempts = 1;

    std::cout << "Guess my favorite color: ";
    std::cin >> guess;
    
    while (guess != favoriteColor)
    {
        std::cout << "Wrong! Try again: ";
        std::cin >> guess;
        attempts = attempts + 1;
    }

    std::cout << "Ur correct! Took You: " << attempts << " attempt(s)." << std::endl;

    // Problem 3
    int numberCount;
    int sum = 0;
    std::cout << "How many numbers would you like to sum? ";
    std::cin >> numberCount;

    for (int x = 1; x <= numberCount; x = x + 1)
    {
        int num;
        std::cout << "Enter number " << x << ": ";
        std::cin >> num;
        sum = sum + num;
    }
    
    std::cout << "The sum of all numbers is: " << sum << std::endl;
    return 0;
}
