#include <bits/stdc++.H>
class Solution
{
public:
    int binaryGap(int n)
    {
        // to convert number into binary:
        std::vector<int> bin;
        while (n > 0)
        {
            bin.push_back(n % 2);
            n = n / 2;
        }
        std::reverse(bin.begin(), bin.end());
        for (auto i : bin)
        {
            std::cout << i << " ";
        }
        int maxDistance = INT_MIN, count = 1, x = 0;
        for (auto i : bin)
        {
            if (i == 1)
            {
                x++;
                maxDistance = std::max(count, maxDistance);
                count = 1;
            }
            else
                count++;
        }
        return x > 1 ? maxDistance : 0;
    }
};
int main()
{
    Solution x;
    std::cout << x.binaryGap(10);
}