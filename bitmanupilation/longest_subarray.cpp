#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]= {12,3,1,6,18,18,6,6,6,4,13,13,13,8};
    int n =14;
    int ans =0;
    int max_el = INT16_MIN;
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_el){
            max_el = arr[i];
            count = 1;
        }
        else if(arr[i]==max_el){
              count++;
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
}