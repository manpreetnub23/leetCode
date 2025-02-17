#include <bits/stdc++.h>
class Solution
{
public:
    int specialArray(std::vector<int> &nums)
    {
        int x = 0, maxX = -1;
        while (x <= nums.size())
        {
            std::cout << "x hai : " << x << std::endl;
            int count = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] >= x)
                {
                    count++;
                    std::cout << "count is :" << count << std::endl;
                }
            }
            std::cout << "bahar aaya for ke aur count hai: " << count << std::endl;
            if (count == x)
            {
                maxX = x;
                std::cout << "oohlalal x and maxX hai : " << x << " " << maxX << std::endl;
            }
            x++;
        }
        std::cout << "sabse bahar maxX hai : " << maxX << std::endl;
        if (maxX == -1max)
            return -1;
        else
            return maxX;
    }
};
int main()
{
    Solution x;
    std::vector<int> v = {0, 4, 3, 0, 4};
    x.specialArray(v);
}