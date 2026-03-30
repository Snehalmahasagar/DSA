#include<bits/stdc++.h>
using namespace std;

vector<int>dupli(vector<int>&arr){
    int n = arr.size();
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);

    }
   vector<int>result;
   for (auto it : s)
   {
      result.push_back(it);
   }
   return result;
   
    
    
}
int main(){

    vector<int> arr = {1,2,2,3,3,5};

    vector<int>res = dupli(arr);
    for (int i = 0; i < res.size(); i++)
    {
        /* code */cout << res[i] << " ";
    }
    


}