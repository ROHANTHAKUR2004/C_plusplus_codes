#include<iostream>
#include<cstdlib>
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
class LinkedList{
    public:
      Node* head;
      Node* tail;
      int size;
      LinkedList(){
        head = tail = NULL;
        size = 0;
      }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<" invaild index "<<endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
        
    }
    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;  
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtHead(5);
    ll.display();
    ll.insertAtIdx(1,8);
    ll.display();

}