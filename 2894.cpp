#include <bits/stdc++.h>
class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0, num2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
            {
                std::cout << "if mein i is = " << i << std::endl;
                num2 += i;
            }
            else
            {
                std::cout << "else mein i is = " << i << std::endl;
                num1 += i;
            }
        }
        return num1 - num2;
    }
};
int main()
{
    Solution x;
    std::cout << x.differenceOfSums(10, 3);
}