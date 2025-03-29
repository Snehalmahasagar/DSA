#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {15, 7, 18, 2, 5, 12, 11, 8, 25, 3, 21, 6, 19, 4, 13, 23, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "primes in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        bool isprime = true;

        if (num < 2)
        {
            isprime = false;
        }
        else
        {
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isprime = false;
                    break;
                }
            }
        }
        if (isprime)
        {
            cout << num << "  ";
        }
    }
    cout << endl;
    return 0;
}