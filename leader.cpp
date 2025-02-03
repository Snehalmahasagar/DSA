#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }

        maxi = max(arr[i], maxi);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 12, 30, 0, 1};
    vector<int> results = leaders(arr);

    for (int x : results)
    {
        cout << x << " ";
    }

    return 0;
}
