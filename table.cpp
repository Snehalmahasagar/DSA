#include <bits/stdc++.h>
using namespace std;
void table(int n)
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " " << "*" << " " << (n * i) << endl;
        sum = sum + (n * i);
    }
    cout << sum;
}
int main()
{
    int n;
    cout << "enter the number : " << endl;
    cin >> n;
    cout << "the table of the number is: " << endl;
    table(n);
    return 0;
}