#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int power(int n, int m)
{
    if (m == 0)
        return 1;

    return n * power(n, m - 1);
}
int main()
{
    int n = 5;
    int m = 3;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << fibo(i) << " ";
    }
    cout << "the factorial of the number is: " << factorial(n);
    cout << "the power of the given number is:  " << power(n, m);

    return 0;
}