#include <bits/stdc++.h>
using namespace std;
void left(int arr[], int n, int kar)
{
    int s = 0;
    int e = n - 1;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == kar)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > kar)
        {
            s = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    cout << ans;
}
int main()
{

    int array[6] = {1, 2, 3, 4, 3, 6};

    int size = 6;

    cout << "the leftmost occurence of the key:";
    left(array, 6, 3);
}
