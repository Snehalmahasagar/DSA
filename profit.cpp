#include <bits/stdc++.h>
using namespace std;

int profitcal(int prices[], int n)
{
    int minprice = INT_MAX;
    int profit = 0;

    for (int prices = 0; prices < n; prices++)
    {
        minprice = min(prices, minprice);
        profit = max(profit, prices - minprice);
    }

    return profit;
}
int main()
{

    int arr[6];
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "enter the elements of hte array: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    vector<int> prices(arr, arr + n);

    cout << "the profit is ::" << profitcal(arr, n);
}