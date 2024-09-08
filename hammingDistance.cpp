#include <bits/stdc++.h>
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        std::string s1 = std::bitset<32>(x).to_string();
        std::string s2 = std::bitset<32>(y).to_string();
        std::cout << s1 << "v " << s2 << std::endl;
    }
};
int main()
{
    Solution x;
    x.hammingDistance(1, 4);
}