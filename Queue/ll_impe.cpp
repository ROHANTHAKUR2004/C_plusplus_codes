#include<iostream>
using namespace std;

class Node{
public:
       int val;
       Node* next;
       Node(int val){
        this->val = val;
        this->next = NULL;
       }
};

class Queue{
public:
         Node* head;
         Node* tail;
         int s;
         Queue(){
            head = tail = NULL;
            s = 0;
         }


  void push(int val){
     Node* temp = new Node(val);
     if(s==0) head = tail = temp;
     else{
        tail->next = temp;;
        tail = temp;
     }
     s++;
  }

  void pop(){
    if(s==0){
        cout<<"empty"<<endl;
        return;
    }
    head = head->next;
    s--;
  }
  int front(){
     if(s==0){
        cout<<"empty"<<endl;
        return -1;
    }
     return head->val;
  }

  int back(){
     if(s==0){
        cout<<"empty"<<endl;
        return -1;
    }
    return tail->val;
  }

  void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
  }

  int size(){
    return s;
  }
};

int main(){

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.display();
     

    return 0;
}