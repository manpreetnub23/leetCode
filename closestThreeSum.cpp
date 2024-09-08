#include <bits/stdc++.h>
class Solution
{
public:
    int threeSumClosest(std::vector<int> &nums, int target)
    {
        int minDiff = INT_MAX, closestSum = INT_MAX, temp = 0;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);
                if (diff < minDiff)
                {
                    minDiff = diff;
                    closestSum = sum;
                }
                if (sum < target)
                    j++;
                else if (sum > target)
                    k--;
                else
                    return sum;
            }
        }
        return closestSum;
    }
};
int main()
{
    Solution x;
    std::vector<int> nums{1, 1, 1, 0};
    std::cout << x.threeSumClosest(nums, 100);
}