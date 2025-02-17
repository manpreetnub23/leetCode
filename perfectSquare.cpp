#include <bits/stdc++.h>
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num < 1)
            return false;
        if (num == 1)
            return true;
        int left = 1, right = num;
        while (left <= right)
        {
            std::cout << "left adn right is : " << left << " " << right << std::endl;
            int middle = left + (right - left) / 2;
            std::cout << "middle is " << middle << std::endl;
            long long square = (long long)middle * middle;
            if (square == num)
                return true;
            else if (square < num)
                left = middle + 1;
            else
            {
                right = middle - 1;
            }
        }
        return false;
    }
};
int main()
{
    Solution x;
    x.isPerfectSquare(64);
}