#include <bits/stdc++.h>
class Solution
{
public:
    double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        int i = 0, j = 0, k = 0;
        std::vector<int> sorted(nums1.size() + nums2.size());
        double median;
        while (i < nums1.size() && j < nums2.size())
        {
            std::cout << "main while mein phas gaya " << std::endl;
            if (nums1[i] < nums2[j])
            {
                sorted[k] = nums1[i];
                i++;
            }
            else
            {
                sorted[k] = nums2[j];
                j++;
            }
            k++;
        }
        while (i < nums1.size())
        {
            sorted[k] = nums1[i];
            i++, k++;
        }
        while (j < nums2.size())
        {
            sorted[k] = nums2[j];
            j++, k++;
        }
        for (auto i : sorted)
            std::cout << i << " ";
        if (sorted.size() % 2 == 0)
        {
            median =
                (sorted[sorted.size() / 2 - 1] + sorted[sorted.size() / 2]) /
                2.0;
        }
        else
        {
            std::cout << "median else mein calculate hua hai" << std::endl;
            median = (sorted[sorted.size() / 2]) / 2.0;
        }
        return median;
    }
};
int main()
{
    Solution x;
    std::vector<int> a{1, 3};
    std::vector<int> b{2};
    std::cout << x.findMedianSortedArrays(a, b);
}