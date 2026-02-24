#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,3,5,2};
    int size = arr.size();
    int n = size +1;
    int expected = n * (n+1)/2;
    int actual =0;
    for (int i = 0; i < arr.size(); i++)
    {
        actual += arr[i];
    }
    int missing = expected-actual;
    cout << missing;
    

   

    
    
}