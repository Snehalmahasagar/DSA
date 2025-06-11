#include <bits/stdc++.h>
using namespace std;
int printnum(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        sum = sum + i;
    }
    return sum;
}
int even(int num)
{
    for (int i = 1; i < num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n = 10;
    cout << printnum(n);
    int num = 12;
    cout << even(num);
    return 0;
}