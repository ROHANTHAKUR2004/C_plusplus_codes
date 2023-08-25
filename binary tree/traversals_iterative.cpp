#include<iostream>
#include<stack>
using namespace std;
class Node{
public: 
     int val;
     Node* left;
     Node* right;
     Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
     }
};

void pre(Node* root){
    stack<Node*> st;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();

        cout<<temp->val<<" ";
        if(temp->right!= NULL) st.push(temp->right);
        if(temp->left!=NULL)  st.push(temp->left);
    }
}

void post(Node* root){
    stack<Node*> st;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();

        cout<<temp->val<<" ";
        if(temp->left!=NULL)  st.push(temp->left);
        if(temp->right!= NULL) st.push(temp->right);
    }
}
void in(Node* root){
    stack<Node*> st;
    Node* n = root ;
    while(st.size()>0 || n){
        if(n){
            st.push(n);
            n = n->left;
        }
        else{
           
          Node* temp = st.top();
          st.pop();
         cout<<temp->val<<" ";
            n = temp->right;
        }
    }
}

 
 
       
         
int main(){
 
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    pre(a);
    cout<<endl;
    post(a);
    cout<<endl;
    in(a);

    return 0;
}