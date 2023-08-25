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
 // insertion sort

    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1])  break;
            else{
                swap(arr[j],arr[j-1]);
                j--;
            }

        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

}