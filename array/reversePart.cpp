#include<iostream>
#include<vector>
using namespace std;

  void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<"  ";

    }
    cout<<endl;
  }

  void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp  = v[i];
        v[i] = v[j];
        v[j]= temp;
        i++;
        j--;
    }
    return ;
  }

 int main(){

   vector<int>v;
      
      
      v.push_back(2);
      v.push_back(3);
      v.push_back(7);
      v.push_back(4);
      v.push_back(8);
  
  display(v);
  int k = 2;
  // reverse 

  int n = v.size();

  reversePart(0,n-k-1,v);
  reversePart(n-k,n-1,v);//v.size()-2;
  reversePart(0,n-k,v);//v.size()-1;
  display(v);


    return 0;
 }