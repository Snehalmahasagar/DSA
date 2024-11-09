#include <iostream>
using namespace std;
int i; 

void reverse(int array[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "  " << array[i] << "  ";
    }
}

void printarray(int array[], int n)
{
    for (i = 0; i < n; i++)
    {

        cout << "  " << array[i] << "  ";
    }
}
int main()
{
    int array[100];
    int n;
    cin >> n;

    for (i = 0; i < n; i++)
    {

        cin >> array[i];
    }
    printarray(array, n);

    reverse(array, n);
}
