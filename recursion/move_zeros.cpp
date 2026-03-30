#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>zeros(vector<int>&arr){
    vector<int>temp (arr.size(),0);
    int indx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
            if(arr[i]!=0){
                temp[indx] = arr[i];
                indx++;
            }
    }

    for(int i = 0 ; i<arr.size();i++){
        arr[i] = temp[i];

    }

    return arr;
    
}
};

int main(){
        vector<int>arr = {2,0,1,3,0,0,0};
        Solution s1 ;
        vector<int>res = s1.zeros(arr);
        for (int i = 0; i < res.size(); i++)
        {
            cout<< res[i] << " ";
        }
        
        
}