#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<" arr size : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Selection sort
    for(int i=0;i<n-1;i++){
        int min = INT16_MAX;
        int mindx = -1;
        //minmum calculation in box
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}