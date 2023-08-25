#include<Iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6 };
    int n =9;
    int k = 3;
    int maxsum = INT16_MIN;
    int maxidx = -1;
    int prevsum = 0;
    for(int i =0;i<k;i++){
        prevsum += arr[i];
    }
    maxsum  = prevsum;
    //sliding window
    int i = 1;
    int j =k;
    while(j<n){
        int currentsum = prevsum +arr[j]- arr[i-1];
        if(maxsum<currentsum){
            maxsum= currentsum ;
            maxidx = i;

        }
        prevsum = currentsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    cout<<maxidx;
    
}