#include<iostream>
using namespace std;
int main(){


    int n,m;
    cout<<" enter rows : ";
    cin>>n;
    cout<<" enter col : ";
    cin>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int max = -10;
     int sum =0;
    int roN = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( arr[i][j] > max){
                max = arr[i][j]; 
                roN = i;
            }
       }            
    }
    
    cout<<max<<endl;
    cout<<sum<<endl;
    cout<<roN<<endl;
     return 0;
}