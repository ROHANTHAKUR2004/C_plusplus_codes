#include<iostream>
using namespace std;

class Queue{
public:
       
       int f;
       int b;
       int arr[5];
       Queue(){
        f=0;
        b=0;
       }

       void push(int x){
        if(b==5){
            cout<<"FULL"<<endl;
            return;
        }
        else{
          arr[b] = x;
          b++;
        }
       }
       void pop(){
        if(f-b==0){
            cout<<" empty"<<endl;
            return;
        }
        else f++;
       }

       int front(){
         if(f-b==0) return -1;
         else return arr[f];
       }
       int back(){
        if(f-b==0) return -1;
        else return arr[b-1];
       }
       int size(){
        return b-f;
       }
       void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
       }
};


int main(){

     Queue q;
      
     cout<<q.front()<<endl;
     q.pop();
     q.push(10);
     q.push(20);
     q.push(30);
     cout<<q.size()<<endl;
     cout<<q.front()<<endl;
     cout<<q.back()<<endl;
     q.display();
     q.pop();
     q.display();
    
     
}