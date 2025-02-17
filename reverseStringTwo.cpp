#include <bits/stdc++.h>
class Solution
{
public:
    std::string reverseStr(std::string s, int k)
    {
        int start = 0, size = s.length();
        std::cout << "size is : " << size << std::endl;
        if (size == 1)
            return s;
        while ((size - k < 2 * k) || (size - k >= k))
        {
            std::cout << "inside while" << std::endl;
            std::reverse(s.begin() + start, (s.begin() + start) + k);
            size -= k;
            std::cout << "size kam hua aur ab hai : " << size << std::endl;
            start += 2 * k;
        }
        if (size - k < k)
        {
            std::cout << "inside if" << std::endl;
            std::reverse(s.begin(), s.begin() + k);
            std::reverse(s.begin() + k, s.end());
            return s;
        }
        return s;
    }
};
int main()
{
    std::string s1 = "abcdefg";
    // std::reverse(s1.begin(), s1.begin() + 2);
    // std::cout << s1 << std::endl;
    Solution x;
    std::cout << x.reverseStr(s1, 2);
}