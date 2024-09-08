#include <bits/stdc++.h>
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1 || n == 2)
        {
            return n;
        }
        else
        {
            int res = climbStairs(n - 1);
            return res;
        }
    }
};
int main()
{
    Solution x;
    std::cout << "total ways = " << x.climbStairs(5);
}