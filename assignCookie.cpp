#include <bits/stdc++.h>
class Solution
{
public:
    int findContentChildren(std::vector<int> &g, std::vector<int> &s)
    {
        int count = 0;
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int i = 0, j = 0;
        while (i < g.size() && j < s.size())
        {
            if (g[i] <= s[j])
            {
                count += 1;
                std::cout << "if mein aaya " << std::endl;
                i++;
            }
            j++;
        }
        return count;
    }
};
int main()
{
    Solution x;
    std::vector<int> g{1, 2, 3};
    std::vector<int> s{1, 1};
    std::cout << x.findContentChildren(g, s);
}