#include <bits/stdc++.h>
using namespace std;
int main()
{
    int reverse_n = 0;
    int n;

    cin >> n;

    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        reverse_n = (reverse_n * 10) + last_digit;
    }

    cout << reverse_n;
    if (reverse_n == n)
    {
        cout << "palindromme";
    }
    else
    {
        cout << "not";
    }
}