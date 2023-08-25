//ele of array in revrse order 
#include<iostream>
using namespace std;
void EleReverse(vector<int>&arr, int currentindex,int n){
    if(currentindex==n) return ;
    EleReverse(arr,currentindex+1,n);
    cout<<arr[currentindex]  ;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr[n];
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.pushback(q);
    }
    EleReverse(arr,0,n);
}