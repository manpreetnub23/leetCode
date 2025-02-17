#include <bits/stdc++.h>
int main()
{
    std::vector<std::string> a{"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::string> s;
    for (auto i = 0; i < a.size(); i++)
    {
        std::sort(a[i].begin(), a[i].end());
    }

    std::unordered_map<std::string, int> nums;
    for (auto i : a)
        nums[i]++;
    for (auto i : nums)
    {
        if (i.second >= 2)
        {
            s.push_back({i.first});
        }
    }
    for (auto i : s)
        std::cout << i << " ";
}