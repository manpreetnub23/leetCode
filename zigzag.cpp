#include <iostream>
#include <string>

int main()
{
    std::string msg;
    int key;
    std::cout << "Enter the message and the key";
    std::cin >> msg >> key;
    if (key == 1)
    {
        std::cout << msg;
        exit(0);
    }
    std::string res = "";
    for (int i = 0; i < key; i++)
    {
        for (int j = 0, idx = i; idx < msg.length(); j++)
        {
            // std::cout << msg.at(idx);
            res += msg.at(idx);
            // std::cout << "kaayde se yeh final string mein gaya hqi " << msg.at(idx) << std::endl;
            if ((i == 0) || (i == key - 1))
            {
                // std::cout << "jab yeh if mein aaya tab i , j , idx = " << i << " " << j << " " << idx << " " << std::endl;
                idx += 2 * key - 2;
                // std::cout << "aur idx is now" << idx << std::endl;
            }
            else
            {
                // std::cout << "jab yeh else mein aaya tab i , j , idx = " << i << " " << j << " " << idx << " " << std::endl;
                if (j % 2 == 0) // Even.
                {
                    idx += (2 * key) - (2 * i) - 2;
                    // std::cout << " else ke if mein idx is " << idx << std::endl;
                }
                else // Odd.
                {
                    idx += 2 * i;
                    // std::cout << " else ke else mein idx is " << idx << std::endl;
                }
            }
        }
        std::cout << std::endl;
    }
    std::cout << res<<std::endl;
}