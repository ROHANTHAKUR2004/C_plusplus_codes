#include<iostream>
#include<stack>
using namespace std;
int main(){

    int arr[] = {1,3,-1,-1,5,3,6,7};
    int n = 8;
    // next greater ele
    int nge[n];
    stack<int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        //pop all ele smaller than arr[i]
        while(st.size() > 0 && st.top() <= arr[i])  st.pop();
        //mark the ans in nge
        if(st.size() == 0) nge[i] = -1;
        else nge[i] = st.top();
        //push ans
        st.push(arr[i]);

    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;



    return 0;
}