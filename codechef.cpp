#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, y, z;
    cin >> x >> y >> z;

    float ourpoint = x + 0.5 * y;
    float oponentpoint = z + 0.5 * y;
    float remain = 4 - (x + y + z);
    float maxpoint = ourpoint + remain;
    if (maxpoint > oponentpoint)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}
