#include <bits/stdc++.h>
class Solution
{
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int> &nums)
    {
        std::vector<int> temp = nums;
        std::vector<int> res;
        std::sort(temp.begin(), temp.end());
        std::cout << "temp is : ";
        for (auto i : temp)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < temp.size(); j++)
            {
                std::cout << "nums[i]=" << nums[i] << "and nums[j] = " << nums[j] << std::endl;
                if (nums[i] != temp[j])
                    count++;
                else
                    break;
            }
            res.push_back(count);
        }
        return res;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{8, 1, 2, 2, 3};
    std::vector<int> res = x.smallerNumbersThanCurrent(a);
    std::cout << "res is : ";
    for (auto i : res)
    {
        std::cout << i << " ";
    }
}