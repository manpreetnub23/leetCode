#include <bits/stdc++.h>
class Solution
{
public:
    int distanceBetweenBusStops(std::vector<int> &distance, int start, int destination)
    {
        int totalSumSimple = 0, totalSumReverse = 0;
        // for (int i = start; i < destination - 1; i++)
        // {
        //     totalSumSimple += distance[i];
        //     // std::cout << totalSumSimple << " ";
        // }
        while (start < destination - 1)
        {
            totalSumSimple += distance[start];
            start++;
        }
        std::cout << std::endl;
        // for (int i = distance.size() - 1; i > destination - 1; i--)
        // {
        //     totalSumReverse += distance[i];
        //     // std::cout << totalSumReverse << " ";
        // }
        while (destination <= distance.size())
        {
            totalSumReverse += distance[destination];
            destination++;
        }
        if (totalSumSimple < totalSumReverse)
            return totalSumSimple;
        else
            return totalSumReverse;
    }
};
int main()
{
    Solution x;
    std::vector<int> distances{1, 2, 3, 4};
    std::cout << x.distanceBetweenBusStops(distances, 0, 3);
}