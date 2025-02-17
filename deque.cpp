#include <bits/stdc++.h>
class MyCircularDeque
{
    int n, last, first, count;

public:
    std::vector<int> q;
    MyCircularDeque(int k)
    {
        n = k, first = 0, last = k - 1, count = 0;
        q = std::vector<int>(n, -1);
    }

    bool insertFront(int value)
    {
        if (isFull())
            return -1;
        first = (first - 1 + n) % n;
        q[first] = value;
        count++;
        return true;
    }

    bool insertLast(int value)
    {
        if (isFull())
            return false;
        last = (last + 1) % n;
        q[last] = value;
        count++;
        return true;
    }

    bool deleteFront()
    {
        if (!isEmpty())
        {
            first = (first + 1) % n;
            count -= 1;
            return true;
        }
        return false;
    }

    bool deleteLast()
    {
        if (!isEmpty())
        {
            last = (last - 1 + n) % n;
            count -= 1;
            return true;
        }
        return false;
    }

    int getFront() { return isEmpty() ? -1 : q[first]; }

    int getRear() { return isEmpty() ? -1 : q[last]; }

    bool isEmpty() { return count == 0; }

    bool isFull() { return count == n; }
};

int main()
{
    MyCircularDeque x(3);
    x.insertLast(1);
    x.insertLast(2);
    x.insertFront(3);
    x.insertFront(4);
    std::cout << x.getRear() << std::endl;
    for (auto i : x.q)
    {
        std::cout << i << " ";
    }
}