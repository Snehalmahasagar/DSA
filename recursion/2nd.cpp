#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1,2,8,9,12};
    int n = arr.size();

    int max = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(arr[second]>arr[max]){
            second = max;
            max = arr[i];
        }
         else if(arr[i] > arr[second] && arr[i] != arr[max]){
                    second = arr[i];
       }
    }
     cout<< second;
        cout<<endl;
        cout<<max;
    
      
        
       
    
   
    
    
}