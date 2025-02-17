#include <bits/stdc++.h>
#include <math.h>
class Solution
{
public:
    int firstMissingPositive(std::vector<int> &nums)
    {
        // replacing negative numbers.
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= 0 || nums[i] > nums.size())
                nums[i] = nums.size() + 1;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int num = abs(nums[i]);
            if (num > nums.size())
                continue;
            num--;
            if (nums[num] > 0)
                nums[num] = -1 * nums[num];
        }
        for (auto i : nums)
            std::cout << i << " ";
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
                return i + 1;
        }
        return nums.size() + 1;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{1, 2, 3, -1};
    x.firstMissingPositive(a);
}