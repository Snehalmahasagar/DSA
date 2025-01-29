#include <bits/stdc++.h>

using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);

    for (int i : l)
    {
        cout << i << " " << endl;
    }
    cout << "size" << l.size();

    l.erase(l.begin(), l.end());
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << "size" << l.size();
}
