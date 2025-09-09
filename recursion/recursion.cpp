#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibo(n - 1) + fibo(n - 2);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int power(int n, int m)
{
    if (m == 0)
        return 1;

    return n * power(n, m - 1);
}
int numPrint(int n)
{
    if (n == 0)
        return 1;
    cout << n << " ";
    return numPrint(n - 1);
}
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int digitCount(int z)
{
    if (z == 0)
        return 0;
    int cnt = 0;
    while (z > 0)
    {
        z = z / 10;
        cnt++;
    }
    return cnt;
}
void reverseString(string &s)
{
    int i = 0, j = s.length();

    swap(s[i], s[j]);
    cout << "the ans is: " << (s, i + 1, j - 1);
}
int palindrome(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    return palindrome(n / 10, rev * 10 + (n % 10));
}
bool isSorted(int arr[], int n)
{
    if (n == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
        return true;

    return isSorted(arr + 1, n - 1);
}

int findMax(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    return max(arr[0], findMax(arr + 1, n - 1));
}
int reverseArray(vector<int> &arr, int start = 0, int end)
{
    end = arr.size() - 1;
    if (start >= end)
        return arr[0];
    swap(arr[start], arr[end]);
    reverseArray(arr, start++, end--);
}
int main()
{
    // int n = 23;
    int m = 3;
    int z = 123;
    string s = "snehal";
    // int arr[] = {1, 2, 7, 4};
    vector<int> arr = {1, 4, 5, 3};

    // for (int i = 1; i <= n; i++)
    /* {
         /* code
         cout << fibo(i) << " ";
     }*/
    // cout << "the factorial of the number is: " << factorial(n) << endl;
    // cout << "the power of the given number is:  " << power(n, m) << endl;
    // cout << "teh reverse order of the number is :  " << numPrint(n) << endl;
    // cout << "the sum of the given series is: " << sum(n) << endl;
    cout << "the no of the digits in the given number is: " << digitCount(z) << endl;
    reverseString(s);
    cout << endl;
    // cout << "the ans is : " << palindrome(n) << endl;
    // cout << "the array is sorted or not : " << isSorted(arr, 4) << endl;
    // cout << " the maximum element in the array is : " << findMax(arr, 4) << endl;
    cout << "the revrse of this array is : " << reverseArray(arr, 0, 3) << endl;
    return 0;
}