#include <bits/stdc++.h>
class Solution
{
public:
    void addBinary(std::string a, std::string b)
    {
        long long num1 = 0, num2 = 0, length1 = a.length(), length2 = b.length();

        for (int i = 0; i < length1; ++i)
        {
            if (a[length1 - i - 1] == '1')
            {
                num1 += std::pow(2, i);
            }
        }
        std::cout << num1 << std::endl;
        for (int j = 0; j < length2; j++)
        {
            if (b[length2 - j - 1] == '1')
            {
                num2 += std::pow(2, j);
            }
        }
        std::cout << num2 << std::endl;
        int n = num1 + num2;
        std::cout << n << std::endl;
        std::string binary;
        while (n > 0)
        {
            std::cout << "inside binary : ";
            binary.push_back((n % 2) + '0');
            n = n / 2;
        }
        // std::reverse(binary.begin(), binary.end());
        for (auto i : binary)
        {
            std::cout << i << " ";
        }
        // return binary;
    }
};
int main()
{
    Solution x;
    std::cout << 5 / 2 << std::endl;
    
    std::string one = "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
    std::string two = "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
    // std::string res = x.addBinary(one, two);
    // for (auto i : res)
    // {
    //     std::cout << i << " ";
    // }
    x.addBinary(one, two);
}