#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"enter rows : ";
    cin>>n;


    int arr[n][n];
    cout<<"enter ele : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"diagonals  " ;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j == n-1) || (i==j)){
                cout<<arr[i][j];

            }
            else cout<<" ";
}
cout<<endl;
}
return 0;
}