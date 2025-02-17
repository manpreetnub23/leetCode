#include <bits/stdc++.h>
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        int l = 1, r = x, result = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            std::cout << "mid is " << mid << std::endl;
            if (mid <= x / mid)
            {
                result = mid;
                l = mid + 1;
                std::cout << "if mein aaya hai aur l ho gaya hai : " << l << std::endl;
            }
            else
            {
                r = mid - 1;
                std::cout << "else mein aaya hai aur r ho gaya hai : " << r << std::endl;
            }
        }
        return result;
    }
};
int main()
{
    Solution x;
    std::cout << x.mySqrt(100);
}