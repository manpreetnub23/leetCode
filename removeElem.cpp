#include <bits/stdc++.h>
class Solution
{
public:
    int removeElement(std::vector<int> &nums, int val)
    {
        int newPos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[newPos++] = nums[i];
            }
        }
        return newPos;
    }
};
int main()
{
    Solution x;
    std::vector<int> nums{3, 2, 2, 3};
    int h = x.removeElement(nums, 3);
    std::cout << h;
}