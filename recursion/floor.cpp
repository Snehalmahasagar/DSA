#include<bits/stdc++.h>
using namespace std;

long long squareRoot(long long n){
    long long low = 1;
    long long high = n ;
    long long ans = 0;
    while (low <= high)
    {
        long long mid = low + (high - low)/2;
        if(mid <= n/mid){
            ans = mid;
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return ans;
    
}
int main(){
    cout << squareRoot(27);
    return 0;
}