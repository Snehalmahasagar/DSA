#include <bits/stdc++.h>
using namespace std;
void helper(vector<int> &arr, int &sum)
{

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << sum;
}
int main()
{
    int n = 5;
    vector<int> arr(n);

    cout << "type the array elements";
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> arr[i];
    }
    cout << endl;

    cout << "the elements of hte array";
    for (int i = 0; i < n; i++)
    {
        /* code */ cout << arr[i];
    }
    cout << "the sum of all the elemnts" << endl;
    int sum = 0;
    helper(arr, sum);
    return 0;
}