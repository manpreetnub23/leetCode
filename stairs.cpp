#include <bits/stdc++.h>
class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long stairs = 0;
        for (int i = 1; (static_cast<long long>(i) * (i + 1)) / 2 <= n; ++i)
        {
            stairs = i;
        }
        return stairs;
    }
};

int main()
{
    Solution x;
    std::cout << x.arrangeCoins(11);
}