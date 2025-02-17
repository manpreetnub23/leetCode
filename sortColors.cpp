#include <bits/stdc++.h>
class Solution
{
public:
    void sortColors(std::vector<int> &nums)
    {
        int i = 0, left = 0, right = nums.size() - 1;
        while (i <= right)
        {
            if (nums[i] == 2)
            {
                std::cout << "if mein aaya hai aur nums[i] & nums[right] = " << nums[i] << " " << nums[right] << std::endl;
                std::swap(nums[i], nums[right]);
                right--;
            }
            else if (nums[i] == 0)
            {
                std::cout << "else if mein aaya hai aur nums[i] & nums[right] = " << nums[i] << " " << nums[right] << std::endl;
                std::swap(nums[i], nums[left]);
                left++;
            }
        }
    }
};
int main()
{
    Solution x;
    std::vector<int> a{2, 0, 2, 1, 1, 0};
    x.sortColors(a);
}