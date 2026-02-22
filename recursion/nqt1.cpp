#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {10, 5 ,10, 8 ,3 ,8};
    int n = arr.size();
    int second = INT_MIN; 
    int max = INT_MIN;
    unordered_map<int, int> freq;
    for(int i = 0 ; i <n ; i ++){
        if(arr[i] > max){
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max){
            second = arr[i];
        }
        freq[arr[i]] ++;

     
    }
    cout << "second max: " << second <<endl;
   
    for(int  i = 0 ; i <n ; i++){
        if(freq[arr[i]] <= 1){
            cout << "non- repeating: "<<arr[i];
            break;
        }
    }
    
}