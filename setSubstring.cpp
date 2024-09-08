#include <bits/stdc++.h>
class Solution
{
public:
    std::vector<int> findErrorNums(std::vector<int> &nums)
    {
        std::unordered_map<int, int> ump;
        std::vector<int> res;
        // made a map with total values;
        for (int i = 0; i < nums.size(); i++)
        {
            ump[nums[i]]++;
        }
        // finding duplicates
        for (auto i : ump)
        {
            if (i.second == 2)
            {
                res.push_back(i.first);
                break;
            }
        }
        // now finding the original value.
        for (int i = 1; i <= nums.size(); i++)
        {
            if (ump[i] == 0)
            {
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{1,1};
    std::vector<int> ress = x.findErrorNums(a);
    for (auto i : ress)
    {
        std::cout << i << " ";
    }
}