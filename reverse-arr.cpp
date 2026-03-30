#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> reverse(vector<int>&arr){
 
    int n = arr.size();
    int left = 0 ; int right = n-1;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    return arr;
}
};
int main(){
  vector<int>arr = {1,2,3,4,5};
  Solution s1 ;
  vector<int>res = s1.reverse(arr);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  
   
   
}