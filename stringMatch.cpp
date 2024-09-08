#include <bits/stdc++.h>
class Solution
{
public:
    bool rotateString(std::string s, std::string goal)
    {
        // char toFind = goal[0];
        // int size = s.length();
        // int otherIterator = 0, count = 0;
        // size_t indexFound = s.find(toFind);
        // if (indexFound != std::string::npos)
        // {
        //     for (int i = indexFound; i < (indexFound + size); i++)
        //     {
        //         std::cout << "ismein aaya aur i hai : " << i << std::endl;
        //         if (s[i % size] == goal[otherIterator])
        //         {
        //             std::cout << "andar bhi aa gaya aur s[i] aur goal[i] : " << s[i] << " " << goal[otherIterator] << std::endl;
        //             count++;
        //         }
        //         otherIterator++;
        //         std::cout << "otherIerator bhi ++ huA : " << otherIterator;
        //     }
        // }
        // return count == size;
        if (s.length() != goal.length())
            return false;
        std::string concatenated = s + s;
        return concatenated.find(goal) != std::string::npos;
    }
};
int main()
{
    Solution x;
    std::cout << std::string::npos << std::endl;
    // std::string s = "bbbacddceeb";
    // std::cout << s[s.length() +] << std::endl;
    std::cout << x.rotateString("bbbacddceeb", "ceebbbbacdd");
}