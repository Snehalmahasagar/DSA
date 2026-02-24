#include<bits/stdc++.h>
using namespace std;

void search(vector<int>arr,int k){
    
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k){
            cout<<"key found at " << i <<" position"<<endl; 
        }
        
    }
    
    
}
int main(){
        vector<int>arr= {1,3,4,5,6};
        search(arr,6);
        return 0;
}