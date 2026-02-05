#include <bits/stdc++.h>
using namespace std;

int peak(int arr[], int n)
{

    int s = 0;
    int end = n - 1;

    int mid = s + (end - s) / 2;
    while (s < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = s + (end - s) / 2;
    }
    return s;
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "the peak index of the array is : " << peak(arr, size);
    return 0;
}