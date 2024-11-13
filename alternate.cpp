  #include <bits/stdc++.h>
using namespace std;
 
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    } 
    cout << endl;
} 

void alternat(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{

    int array1[4];
    int length = 4;

    for (int i = 0; i < length; i++)
    {
        cin >> array1[i];
    }

    cout << "original array" << "  ";
    printarray(array1, 4);
    alternat(array1, 4);
    cout << " swaped aray " << " ";
    printarray(array1, 4);
}
