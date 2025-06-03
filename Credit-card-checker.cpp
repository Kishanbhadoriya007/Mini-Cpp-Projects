#include <string>
#include <iostream>
#include <vector>
#include <cmath> //#include <math.h>
#include <ctime> //#include <time.h>
#include <cstdlib>
#include <iomanip>

// Function prototypes
int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{           //6011000990139424
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << cardNumber << " is valid" << std::endl;
    }
    else {
        std::cout << cardNumber << " is not valid" << std::endl;
    }

    return 0;
}

// Function to get the sum of the digits of a number
int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}

// Function to sum the odd-positioned digits from the right
int sumOddDigits(const std::string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

// Function to sum the even-positioned digits from the right
int sumEvenDigits(const std::string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}

