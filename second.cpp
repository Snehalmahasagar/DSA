#include <bits/stdc++.h>
using namespace std;
int secondlarge(vector<int> arr)
{

    int n = arr.size();
    sort(arr.begin(), arr.end());
    cout << "the second largest element of array is: " << arr[n - 2];
}
int main()
{
    vector<int> arr = {23, 56, 678, 45};
    secondlarge(arr);
}