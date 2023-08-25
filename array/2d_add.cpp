#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter rows";
    cin>>n;

    int m;
    cout<<"enter col";
    cin>>m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>a[i][j] ;
        }
    }
  cout<<endl;
  int b[n][m];
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cin >> b[i][j] ;
                }
   
   }
   
cout<<endl; 
   int res[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< a[i][j] + b[i][j]<<" ";
        }
        cout<<endl; 
    }
    return 0;
}