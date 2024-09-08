#include <bits/stdc++.h>
class Solution
{
public:
    int trap(std::vector<int> &height)
    {
        int left = 0, right = height.size() - 1, trappedWater = 0;
        int lMax = INT_MIN, rMax = INT_MIN;
        while (left < right)
        {
            std::cout << "left = " << left << " right = " << right << std::endl;
            if (height[left] < height[right])
            {
                std::cout << "inside if because height[left] = " << height[left] << " < height[right] = " << height[right] << std::endl;
                lMax = std::max(lMax, height[left]);
                std::cout << "lMax = " << lMax << std::endl;
                trappedWater += lMax - height[left];
                std::cout << "Trapped Water = " << trappedWater << std::endl;
                left++;
                std::cout << "left++ hone ke baad : " << left << std::endl;
            }
            else
            {
                std::cout << "inside else because height[left] = " << height[left] << " < height[right] = " << height[right] << std::endl;
                rMax = std::max(rMax, height[right]);
                std::cout << "rMax = " << rMax << std::endl;
                trappedWater += rMax - height[right];
                std::cout << "Trapped Water = " << trappedWater << std::endl;
                right--;
                std::cout << "right-- hone ke baad : " << right << std::endl;
            }
        }
        return trappedWater;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{1, 8, 6, 2, 5, 4, 8, 3, 7};
    std::cout << "total trapped water = " << x.trap(a) << std::endl;
}