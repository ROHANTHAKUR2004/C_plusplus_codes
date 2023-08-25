#include<iostream>
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

void reverse_even(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0)  q.pop();
        else {
            q.push(q.front());
            q.pop();
        }
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
      reverse_even(q);
      display(q);

}