#include<iostream>
#include<algorithm>
#include<queue>
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

void left(Node* root ){
    if(root== NULL) return ;
    if(root->left== NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    left(root->left);
    if(root->left==NULL) left(root->right);
}

 void bottom(Node* root ){
    if(root== NULL) return ;
    if(root->left== NULL && root->right==NULL){
        cout<<root->val<<" ";
    } 
    
    bottom(root->left);
    bottom(root->right);
}

void ri(Node* root){
    if(root== NULL) return ;
    if(root->left== NULL && root->right==NULL) return;
    ri(root->right);
    if(root->right==NULL) ri(root->left);
    cout<<root->val<<" ";
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

    left(a);
    cout<<endl;
    bottom(a);
    cout<<endl;
     ri(a->right);

 }