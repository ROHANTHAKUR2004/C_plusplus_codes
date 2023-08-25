#include<iostream>
#include<vector>
using namespace std;
  
    void sort(vector<int>&v){
        int n = v.size();
        int noo =0;
        int noz = 0;
              
       for(int i=0;i<n;i++){
           
            if(v[i]==0)noz++;
            else noo++ ;
       }

  //filling ele'

  for(int i=0;i<n;i++){
          if(i<noz) v[i]=0;
          else v[i]=1;

  }

       

    }
 
 int main(){

    vector<int>v;
    int n;
    cout<<"array size : " ;
    cin>>n;


    cout<<"array ele : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);

    }
     for(int i=0;i<n;i++){
           cout<<v[i]<<"  ";


     }
     cout<<endl;

     //kaam'
     sort(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<"  ";

     }
     cout<<endl;
     return 0;
    }

