#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> &arr)
{

    int n = arr.size();
    for (int i = 0; i < n; i++)

    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt > n / 2)
        {
            return arr[i];
            
        }
    }
   
    return -1;
}
int main()
{

    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
    int res = majority(arr);
    cout << res;
}