#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    int n;
    cout<< "array size : ";
    cin>>n;

    cout<<" array elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
       v.push_back(q);
    }

    int x =4;
    int idx =-1;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            idx = i;
        }
    }
    cout<<idx;
    return 0;
}