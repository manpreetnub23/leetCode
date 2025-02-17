#include <bits/stdc++.h>
class Solution
{
public:
    void nToOne(int i, int n)
    {
        if (i > n)
            return;
        nToOne(i + 1, n);
        std::cout << i << " ";
    }
};
int main()
{
    Solution x;
    x.nToOne(1, 10);
}