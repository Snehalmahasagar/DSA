#include <bits/stdc++.h>
using namespace std;
void printarray(int arra[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arra[i] << "  ";
    }
    cout << endl;
}

void uniuew(int arra[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arra[i];
    }
    cout << ans;
}

int main()
{

    int arra[5];

    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cin >> arra[i];
    }

    printarray(arra, 5);
    uniuew(arra, 5);
}