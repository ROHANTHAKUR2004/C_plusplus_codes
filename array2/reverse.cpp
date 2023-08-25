#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
int main(){

    vector<int> v;
    int n ;
    cout<<" array size : ";
    cin>>n;

    cout<<"array ele : ";
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
    }
     display(v);
     
      // reverse 
      int i=0;
      int j = v.size()-1;

      while(i<=j){
        //swap i and j
        int temp = v[i];
        v[i]= v[j];
        v[j]= temp;
        i++;
        j--;
      }
      
      display(v); 
    return 0;
}