#include <bits/stdc++.h>
using namespace std;
int summation(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n = 123;
    cout << "result is " << summation(n);
    return 0;
}