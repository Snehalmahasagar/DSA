#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>&arr, int k ){
    int n = arr.size();
    int low = 0 ; int high = n-1;
    
   
    while(low<=high){
        int mid = low +(high - low)/2;
        if(arr[mid] == k){
            return arr[mid];
        }
       else if(arr[mid]<k){
            low = mid+1;
        }
       else{
        high = mid -1;
       }
        
    }return -1;
}
int main(){
        vector<int>arr = {1,2,3,4,5};
        int res  = binary(arr,5);
        if(res == -1){
            cout<< "key not found";
        }
        else{
            cout << "key found at this "<< res;
        }
}