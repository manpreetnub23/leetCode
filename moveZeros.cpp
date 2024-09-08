#include <bits/stdc++.h>
class Solution
{
public:
    void moveZeroes(std::vector<int> &nums)
    {
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            // std::vector<int>::iterator it = nums.begin() + i;
            auto it = std::find(nums.begin(), nums.end(), 0);
            std::cout << *it;
            // int last = nums.size() - 1;
            nums.erase(it);
            nums.push_back(0);
        }
        for (auto i : nums)
        {
            std::cout << i << " ";
        }
    }
};
int main()
{
    Solution x;
    std::vector<int> nums{0, 1, 0, 3, 12};
    x.moveZeroes(nums);
}