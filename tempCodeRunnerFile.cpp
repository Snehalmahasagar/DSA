#include <bits/stdc++.h>
using namespace std;
int table(int i)
{
    int n = 4;

    if (i > 10)
        return 1;
    cout << n * table(i + 1) << endl;
}
int main()
{
    int i = 1;
    cout << "the table of the given number is " << endl;
    table(i);
    return 0;
}