#include <bits/stdc++.h>
class Solution
{
public:
    long long findMaximumScore(std::vector<int> &nums)
    {
        long long maxScore = 0;
        int i = 0, j = 1;
        while (j < nums.size())
        {
            if (i != j && nums[i] < nums[j])
            {
                std::cout << "if mein aaya hai " << std::endl;
                maxScore += (j - i) * nums[i];
                std::cout << "maxscore is : " << maxScore << std::endl;
                i = j;
            }
            else if (i == 0 && j == nums.size() - 1)
            {
                std::cout << "else if mein aaya hai " << std::endl;
                maxScore += (j - i) * nums[i];
            }
            j++;
            std::cout << "nums[i]= " << nums[i] << std::endl;
        }
        return maxScore;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{1, 6, 1};
    std::cout << x.findMaximumScore(a);
}