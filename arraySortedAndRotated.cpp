#include <bits/stdc++.h>
class Solution
{
public:
    bool check(std::vector<int> &nums)
    {
        std::vector<int> copy = nums;
        std::sort(copy.begin(), copy.end());
        
    }
};
int main()
{
    Solution x;
    std::vector<int> a{2, 1, 3, 4};
    std::cout << x.check(a);
}