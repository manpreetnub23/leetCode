#include <bits/stdc++.h>
class Solution
{
public:
    int maxProduct(std::vector<int> &nums)
    {
        int sum = 0;
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        for (int i = n - 1; i > n - 3; i--)
        {
            sum += nums[i] - 1;
            std::cout << nums[i] - 1 << "and sum is now : " << sum << std::endl;
        }
        return sum;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{3, 4, 5, 2};
    x.maxProduct(a);
}