#include <bits/stdc++.h>
class Solution
{
public:
    std::vector<int> selfDividingNumbers(int left, int right)
    {
        std::vector<int> selfDividingNumbers;
        for (int i = left; i <= right; i++)
        {
            bool isValid = true;
            int temp = i;
            while (temp > 0)
            {
                int digit = temp % 10;
                std::cout << digit << std::endl;
                if (digit == 0 || i % digit != 0)
                {
                    isValid = false;
                    break;
                }
                temp /= 10;
            }
            if (isValid)
            {
                selfDividingNumbers.push_back(i);
            }
        }
        return selfDividingNumbers;
    }
};
int main()
{
    Solution x;
    std::vector<int> res = x.selfDividingNumbers(1, 11);
    for (auto i : res)
    {
        std::cout << i << " ";
    }
}