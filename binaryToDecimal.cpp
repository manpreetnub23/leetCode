#include <iostream>
#include <cmath>
#include <string>

int main()
{
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    int number = 0;
    int length = binary.length();
    for (int i = 0; i < length; ++i)
    {
        if (binary[length - i - 1] == '1')
        {
            number += std::pow(2, i);
        }
    }

    std::cout << "Decimal equivalent: " << number << std::endl;

    return 0;
}
