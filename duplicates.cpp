#include <bits/stdc++.h>
class Solution
{
public:
    void containsDuplicate(std::vector<int> &nums)
    {
        std::vector<int> arr(9, 0);
        bool flag = false;
        for (int i = 0; i < nums.size(); i++)
        {
            std::cout << nums[i] << std::endl;
            arr[nums[i] - 1]++;
        }
        for (auto i : arr)
        {
            std::cout << i << " ";
            if (i > 1)
            {
                std::cout << "HAAN HAI";
            }
        }
    }
};
int main()
{
    Solution x;
    std::vector<int> nums{1, 2, 3, 1};
    x.containsDuplicate(nums);
}