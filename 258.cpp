#include <bits/stdc++.h>
class Solution
{
public:
    int addDigits(int num)
    {
        std::cout << "add digite mein aaya hun" << std::endl;
        if (num >= 0 && num < 10)
            return num;
        int sum = 10000;
        while (true)
        {
            std::cout << "while mein aa gaya hai : " << std::endl;
            int len = std::to_string(num).length();
            std::cout << "len hai : " << len << std::endl;
            if (len == 1)
                return num;
            int temp = num, sum = 0;
            std::cout << "temp hai : " << temp << std::endl;
            while (temp > 0)
            {
                int rem = temp % 10;
                sum += rem;
                std::cout << "sum hai : " << sum << std::endl;
                temp /= 10;
            }
            num = sum;
        }
    }
};
int main()
{
    Solution x;
    std::cout << x.addDigits(38);
}