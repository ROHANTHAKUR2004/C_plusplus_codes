#include<iostream>
#include<vector>
using namespace std;


 int main(){
    int x;
    cout<< "target : ";
    cin>>x;

    vector<int>v;
    int n;
    cout<< " array size: ";
    cin>>n;

     cout<<" array  ele : ";
     for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
     }

     for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if( v[i]+v[j]==x){
                cout<<"("<<i<<" ,"<<j<<")"<<endl;
            }
        }
     }


return 0;

 }
 