#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>move(vector<int>&arr){
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    if(j == -1){
        cout << "no zeros";
    }
    for (int i = j+1; i < arr.size(); i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    return arr;
    
    
}
};
int main(){
  vector<int>arr = {2,0,1,3,0,0,0};
        Solution s1 ;
        vector<int>res = s1.move(arr);
        for (int i = 0; i < res.size(); i++)
        {
            cout<< res[i] << " ";
        }
}