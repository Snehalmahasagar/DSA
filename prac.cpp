#include <bits/stdc++.h>
using namespace std;
int table(int n, int i)
{

    if (i > 10)
        return 1;
    cout << n << "*" << i << "=" << n * i << endl;
    table(n, i + 1);
}
int main()
{
    int n = 4;
    cout << "the table of the given number is " << endl;
    table(n, 1);
    return 0;
}