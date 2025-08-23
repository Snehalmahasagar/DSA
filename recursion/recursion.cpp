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
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << fibo(i) << " ";
    }
    cout << "the factorial of the number is: " << factorial(n);

    return 0;
}