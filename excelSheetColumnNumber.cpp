#include <bits/stdc++.h>
class Solution
{
public:
    int titleToNumber(std::string columnTitle)
    {
        int res = 0;

        for (char c : columnTitle)
        {
            res = res * 26 + (c - 'A' + 1);
        }

        return res;
    }
};

int main()
{
    Solution x;
    std::cout << x.titleToNumber("ZY");
}