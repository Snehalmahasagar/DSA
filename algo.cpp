 #include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void subarray(vector<int> arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {1, 3, 5, 6, 9, 12}; // Example array
    obj.subarray(arr);                     // Call subarray function
    return 0;
}
