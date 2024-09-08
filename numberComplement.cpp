#include <bits/stdc++.h>
class Solution
{
public:
    // std::string toBinary(int num)
    // {
    //     std::string res = "";
    //     while (num > 0)
    //     {
    //         res.push_back((num % 2) + '0');
    //         num /= 2;
    //     }
    //     std::reverse(res.begin(), res.end());
    //     return res;
    // }
    int findComplement(int num)
    {
        // std::string binary = toBinary(num);

        // for (int i = 0; i < binary.length(); i++)
        // {
        //     if (binary[i] == '1')
        //         binary[i] = '0';
        //     else
        //         binary[i] = '1';
        // }
        // unsigned long long int decimal = 0;
        // for (int i = 0; i < binary.length(); ++i)
        // {
        //     std::cout << "for loop mein aaya hai " << std::endl;
        //     if (binary[binary.length() - i - 1] == '1')
        //     {
        //         decimal += (1ULL << i);
        //     }
        // }
        std::bitset<32> binary(num);
        binary = ~binary;
        std::cout << binary << std::endl;
        unsigned long long int decimal = 0;
        for (int i = 0; i < binary.size(); ++i)
        {
            std::cout << "for loop mein aaya hai " << std::endl;
            if (binary[binary.size() - i - 1] == '1')
            {
                decimal += (1ULL << i);
            }
        }
        std::cout << decimal << std::endl;
    }
};
int main()
{
    Solution x;
    x.findComplement(5);
}