#include <bits/stdc++.h>
class Solution
{
public:
    int removeDuplicates(std::vector<int> &nums)
    {
        int curr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            std::cout << "abhi i hai : " << i << std::endl;
            if (nums[curr] != nums[i])
            {
                std::cout << "abhi if mein aaya hai kyonki nums[curr] & nums[i] abhi equal nahi hain : " << nums[curr] << " " << nums[i] << std::endl;
                std::swap(nums[i], nums[++curr]);
                std::cout << "ab dono swap ho chuke hain aur i and curr hain " << i << " " << curr << std::endl;
            }
        }
        for (auto i : nums)
        {
            std::cout << i << " ";
        }
        return curr + 1;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{1, 1, 2};
    std::cout << "return hokar jo aaya hai : " << x.removeDuplicates(a);
}