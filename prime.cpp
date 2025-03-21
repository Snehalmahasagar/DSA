#include <bits/stdc++.h>
using namespace std;

bool isprime(int numtocheck)
{

    if (numtocheck < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(numtocheck); i++)
    {
        if (numtocheck % i == 0)
        {
            return false;
        }
    }
    return true;
}

int primesum(int l, int r)
{
    int sum = 0;
    for (int i = r; i >= l; --i)
    {
        bool prime = isprime(i);
        if (prime)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    cout << "the sum of hte prime numbers between the range is: " << primesum(2, 10);
}