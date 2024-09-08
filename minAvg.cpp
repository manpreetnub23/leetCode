#include <bits/stdc++.h>
class Solution
{
public:
    double minimumAverage(std::vector<int> &nums)
    {
        int n = nums.size();
        std::vector<double> averages;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < n / 2; i++)
        {
            averages.push_back((nums[i] + nums[n - i - 1]) / 2.0);
        }
        double minn = *std::min_element(averages.begin(), averages.end());
        return minn;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{7, 8, 3, 4, 15, 13, 4, 1};
    std::cout << x.minimumAverage(a);
}