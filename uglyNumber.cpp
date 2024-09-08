#include <bits/stdc++.h>
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n == 1)
            return true;
        for (int i = 2; i < 10; i++)
        {
            if (n % i == 0)
            {
                std::cout << "inside if and i = " << i << std::endl;
                if (i == 2 || i == 3 || i == 5)
                {
                    std::cout << "2 , 3, 5 se nahi ho raha hai" << std::endl;
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    Solution x;
    // std::cout << "14 % 2 == 0" << 14 % 2 << std::endl;
    std::cout << x.isUgly(14);
}