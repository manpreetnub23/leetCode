#include <bits/stdc++.h>
class Solution
{
public:
    int chalkReplacer(std::vector<int> &chalk, int k)
    {
        int n = chalk.size();
        int i = 0;
        while (k - (chalk[i % n]) >= 0)
        {
            k = k - chalk[i % n];
            std::cout << "k is now : " << k << std::endl;
            i++;
            std::cout << "i ab ho gaya hai : " << i % n << std::endl;
        }
        std::cout << "aur last mein jab return ho raha hai tab i hai : " << i % n << std::endl;
        return i % n;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{5,1,5};
    x.chalkReplacer(a, 22);
}