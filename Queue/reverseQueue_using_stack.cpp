#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int> & q){

    int n = q.size();
    for(int i=0;i<n;i++){
        q.push(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void reverse(queue<int> &q){

    stack<int>st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    //now empty it into queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
      q.push(10);
      q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      q.push(60);
      display(q);
      reverse(q);
      display(q);
}