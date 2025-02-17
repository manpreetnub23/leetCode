#include <bits/stdc++.h>
class Solution
{
public:
    char kthCharacter(int k)
    {
        int num = 1;
        std::string word = "a";
        while (word.length() < k)
        {
            std::cout << "inside while when word.length() = : " << word.length() << std::endl;
            std::string temp = "";
            for (int i = 0; i < word.length(); i++)
            {
                std::cout << ((word[i] + 1) % 97) + 'a' << std::endl;
                temp += ((word[i] + 1) % 97) + 'a';
            }
            word += temp;
            std::cout << word << std::endl;
            temp.clear();
        }
        return word[k - 1];
    }
};
int main()
{
    Solution x;
    std::cout << x.kthCharacter(5);
}