#include <bits/stdc++.h>
class Solution
{
public:
    bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i <= std::sqrt(num); i++)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    unsigned long long factorial(int num)
    {
        unsigned long long result = 1;
        for (int i = 2; i <= num; i++)
        {
            result *= i;
        }
        return result;
    }
    int numPrimeArrangements(int n)
    {
        int primes = 0, composites = 1;
        long long res = 0;
        for (int i = 2; i <= n; i++)
        {
            isPrime(i) == true ? primes += 1 : composites += 1;
        }
        std::cout << "primes = " << primes << " " << "composites = " << composites << std::endl;
        res = factorial(primes) + factorial(composites);
        // res %= std::pow(10, 9) + 7;
        return res;
    }
};
int main()
{
    Solution x;
    std::cout << x.numPrimeArrangements(5);
}