#include <bits/stdc++.h>
class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        int temp = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            temp = mid;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return temp + 1;
    }
};
int main()
{
    Solution x;
    std::vector<int> res{1, 3, 5, 6};
    std::cout << x.searchInsert(res, 5) << std::endl;
}