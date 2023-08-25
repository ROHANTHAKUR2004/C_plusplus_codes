#include<iostream>
#include<vector>
using namespace std;

 void sort(vector<int>&v){

       int n =v.size();
       int i=0;
       int j = n-1;

       while(i<j){
        if(v[i]==0) {
            i++ ;
             }
        else if(v[j]==1){
             j-- ;
        }
        else if(i>j){
        break;
        }
       else  if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
         }
       }

 }

int main(){
    vector<int>v;
    int n;
    cout<<" v size : ";
    cin>>n;

    cout<<" v ele : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        sort(v);
        
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
       
    }
    return 0;
}