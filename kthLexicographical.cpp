#include <bits/stdc++.h>
class Solution
{
public:
    int findKthNumber(int n, int k)
    {
        int curr = 1, count = 0;
        for (int i = 0; i < n; i++)
        {
            std::cout << curr << " ";
            count++;
            if (k > n)
                return -1;
            if (count == k)
                return curr;
            if (curr * 10 <= n)
                curr *= 10;
            else
            {
                while (curr % 10 == 9 || curr >= n)
                    curr /= 10;
                curr += 1;
            }
        }
        return -1;
    }
};
int main()
{
    Solution x;
    std::cout << x.findKthNumber(100, 90);
}