#include <bits/stdc++.h>
class Solution
{
public:
    int maxAscendingSum(std::vector<int> &nums)
    {
        int sum = 0, maxSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            std::cout << "i hai : " << i << std::endl;
            sum = nums[i];
            if (nums[i + 1] > nums[i])
            {
                sum += nums[i + 1];
                std::cout << "if mein aaya hai aur sum hai : " << sum << std::endl;
            }
            else if (nums[i + 1] < nums[i])
            {
                std::cout << "else if mein aaya hai kyonki nums[i + 1] =  : " << nums[i + 1] << "aur nums[i] = " << nums[i] << std::endl;
                if (maxSum < sum)
                {
                    maxSum = sum;
                    std::cout << "else if ke if mein aa gaa=ya hai aur maxSum update hua hai " << maxSum << std::endl;
                }
                sum = 0;
            }
            if (maxSum < sum)
                maxSum = sum;
            std::cout << "dono conditions ke bahar maxSum hai " << maxSum << std::endl;
        }
        return maxSum;
    }
};
int main()
{
    Solution x;
    std::vector<int> arr = {10, 20, 30, 5, 10, 50};
    std::cout << x.maxAscendingSum(arr);
}