#include<bits/stdc++.h>
using namespace std;
class MinStack{
    public:
    stack<int> main;
    stack<int>mini;

    void push(int x){
        main.push(x);
        if(mini.empty() || x <= mini.top()){
            mini.push(x);
            
        }
    }
    void pop(){
        if(main.empty())return;
        if(main.top()==mini.top()){
            mini.pop();
        }
        main.pop();
    }

    int top(){
        if(main.empty()) return -1;
        return main.top();
    }

    int getMin(){
        if(mini.empty())return -1;
        return mini.top();
    }
};
int main(){
  MinStack st;
  st.push(5);
  st.push(6);
  st.push(1);
  st.push(3);

  cout<<st.getMin() << endl;
  st.pop();
  cout<<st.getMin();
    


}