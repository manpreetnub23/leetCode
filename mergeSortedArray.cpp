#include <bits/stdc++.h>
class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        int i = 0, j = 0;
        nums1.erase(nums1.begin() + m, nums1.end());
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                nums1.insert(nums1.begin() + i, nums2[j]);
                i++, j++, m++;
            }
        }
        while (j < n)
        {
            nums1.push_back(nums2[j]);
            j++;
        }
        for (auto i : nums1)
            std::cout << i << " ";
    }
};
int main()
{
    Solution x;
    std::vector<int> a{1, 2, 3, 0, 0, 0};
    std::vector<int> b{2, 5, 6};
    x.merge(a, 3, b, 3);
}
