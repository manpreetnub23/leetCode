// #include <bits/stdc++.h>

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
// class Solution
// {
// public:
//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//     {
//         // for list 1
//         std::vector<int> lis1;
//         ListNode *temp1 = l1;
//         while (temp1 != nullptr)
//         {
//             lis1.push_back(temp1->val);
//             temp1 = temp1->next;
//         }
//         std::reverse(lis1.begin(), lis1.end());
//         int num1 = 0;
//         for (int i = 0; i < lis1.size(); i++)
//         {
//             num1 = num1 * 10 + lis1[i];
//         }

//         // for list 2
//         std::vector<int> lis2;
//         ListNode *temp2 = l2;
//         while (temp2 != nullptr)
//         {
//             lis2.push_back(temp2->val);
//             temp2 = temp2->next;
//         }
//         std::reverse(lis2.begin(), lis2.end());
//         int num2 = 0;
//         for (int i = 0; i < lis2.size(); i++)
//         {
//             num2 = num2 * 10 + lis2[i];
//         }
//         long total = num1 + num2;
//         ListNode *neww = new ListNode(0);
//         ListNode *curr = neww;

//         if (total == 0)
//         {
//             return new ListNode(0);
//         }
//         while (total > 0)
//         {
//             int digit = total % 10;
//             curr->next = new ListNode(digit);
//             curr = curr->next;
//             total = total / 10;
//         }
//         return neww->next;
//     }
// };
// int main()
// {
//     Solution x;
//     // Creating list l1 with nodes 1 -> 2 -> 3
//     ListNode *l1_node10 = new ListNode(1);
//     ListNode *l1_node9 = new ListNode(9, l1_node10);
//     ListNode *l1_node8 = new ListNode(9, l1_node9);
//     ListNode *l1_node7 = new ListNode(9, l1_node8);
//     ListNode *l1_node6 = new ListNode(9, l1_node7);
//     ListNode *l1_node5 = new ListNode(9, l1_node6);
//     ListNode *l1_node4 = new ListNode(9, l1_node5);
//     ListNode *l1_node3 = new ListNode(9, l1_node4);
//     ListNode *l1_node2 = new ListNode(9, l1_node3);
//     ListNode *l1 = new ListNode(1, l1_node2);

//     // Creating list l2 with nodes 2 -> 4 -> 5
//     // ListNode *l2_node3 = new ListNode(5);
//     // ListNode *l2_node2 = new ListNode(4, l2_node3);
//     ListNode *l2 = new ListNode(9);

//     // Instantiate Solution class and call addTwoNumbers
//     Solution sol;
//     ListNode *res = x.addTwoNumbers(l1, l2);
//     ListNode *temp = res;
//     while (temp != nullptr)  // Corrected the loop to traverse the list
//         {
//             std::cout << temp->val << " ";
//             temp = temp->next;  // Move to the next node
//         }
// }
#include <bits/stdc++.h>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyHead = new ListNode(0); // Create a dummy head for the result list
        ListNode *current = dummyHead;         // Pointer to build the new list
        int carry = 0;                         // Variable to hold the carry

        // Loop through both lists until you reach the end of both lists
        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int sum = carry; // Start with the carry

            if (l1 != nullptr)
            {
                sum += l1->val; // Add value from the first list if available
                l1 = l1->next;  // Move to the next node in l1
            }

            if (l2 != nullptr)
            {
                sum += l2->val; // Add value from the second list if available
                l2 = l2->next;  // Move to the next node in l2
            }

            carry = sum / 10;                       // Calculate new carry
            current->next = new ListNode(sum % 10); // Create a new node with the digit value
            current = current->next;                // Move to the newly created node
        }

        return dummyHead->next; // Return the next node of dummy head (the actual result)
    }
};
int main()
{
    Solution x;
    // Creating list l1 with nodes 1 -> 2 -> 3
    ListNode *l1_node10 = new ListNode(1);
    ListNode *l1_node9 = new ListNode(9, l1_node10);
    ListNode *l1_node8 = new ListNode(9, l1_node9);
    ListNode *l1_node7 = new ListNode(9, l1_node8);
    ListNode *l1_node6 = new ListNode(9, l1_node7);
    ListNode *l1_node5 = new ListNode(9, l1_node6);
    ListNode *l1_node4 = new ListNode(9, l1_node5);
    ListNode *l1_node3 = new ListNode(9, l1_node4);
    ListNode *l1_node2 = new ListNode(9, l1_node3);
    ListNode *l1 = new ListNode(1, l1_node2);

    // Creating list l2 with nodes 2 -> 4 -> 5
    // ListNode *l2_node3 = new ListNode(5);
    // ListNode *l2_node2 = new ListNode(4, l2_node3);
    ListNode *l2 = new ListNode(9);

    // Instantiate Solution class and call addTwoNumbers
    Solution sol;
    ListNode *res = x.addTwoNumbers(l1, l2);
    ListNode *temp = res;
    while (temp != nullptr) // Corrected the loop to traverse the list
    {
        std::cout << temp->val << " ";
        temp = temp->next; // Move to the next node
    }
}