#include <bits/stdc++.h>
class Solution
{
public:
    int longestSubarray(std::vector<int> &nums)
    {
        int count = 0, maxx = nums[0], longestSubarray = 0;
        for (auto i : nums)
        {
            if (maxx < i)
                maxx = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == maxx)
            {
                count++;
                longestSubarray = std::max(longestSubarray, count);
            }
            else
                count = 0;
        }
        return longestSubarray;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{378034, 378034, 378034};
    std::cout << x.longestSubarray(a);
}