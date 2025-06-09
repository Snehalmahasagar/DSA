#include <bits/stdc++.h>
using namespace std;
int maxelement(vector<int> arr)
{

    int max = arr[0];
    for (int i = 01; i < arr.size(); i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    vector<int> arr = {10, 34, 56, 57};
    cout << "largest element is : " << maxelement(arr);
    return 0;
}