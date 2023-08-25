#include<iostream>
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

 void pre_display(Node* root){
    if(root == NULL) return ;
    cout<<root->val<<" ";
    pre_display(root->left);
    pre_display(root->right);
 }

  void in_display(Node* root){
    if(root == NULL) return ;
    in_display(root->left);
    cout<<root->val<<" ";
    in_display(root->right);
 }

  void post_display(Node* root){
    if(root == NULL) return ;
    post_display(root->left);
    post_display(root->right);
    cout<<root->val<<" ";
 }
 void n_thlevel(Node* root , int curr,int level){
    if(root == NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    n_thlevel(root->left,curr+1,level);
    n_thlevel(root->right,curr+1,level);
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

    //pre_display(a);
    cout<<endl;
    in_display(a);
    cout<<endl;
    //post_display(a);
    cout<<endl;
    //n_thlevel(a,1,3);

    return 0;
}