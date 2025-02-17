#include <bits/stdc++.h>
class Solution
{
public:
    int minOperations(std::vector<int> &nums, int k)
    {
        int count = 0;
        if (nums.size() < 2)
            return -1;
        while (true)
        {
            auto min1_it = std::min_element(nums.begin(), nums.end());
            int x = *min1_it;
            std::cout << " x = " << x << std::endl;
            if (x < k)
                nums.erase(min1_it);
            auto min2_it = std::min_element(nums.begin(), nums.end());
            int y = *min2_it;
            std::cout << "y = " << y << std::endl;
            if (y < k)
            {
                nums.erase(min1_it);
                nums.erase(min2_it);
                std::cout << "nums is : " << std::endl;
                for (auto i : nums)
                {
                    std::cout << i << " ";
                }
                std::cout << std::endl;
                nums.push_back((std::min(x, y) * 2) + std::max(x, y));
            }
            else
                break;
            std::cout << "update se pehle count " << count << std::endl;
            count++;
        }
        return count;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{2, 11, 10, 1, 3};
    std::cout << x.minOperations(a, 10);
}