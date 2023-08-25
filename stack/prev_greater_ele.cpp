#include<iostream>
#include<stack>
using namespace std;
int main(){

    int arr[] = {3,1,2,5,4,6,2,3};
    int n = 8;
    // prev greater ele
    int pge[n];
    stack<int> st;
    pge[0] = -1;
    st.push(arr[0]);

    for(int i=1;i<n;i++){
        //pop all ele smaller than arr[i]
        while(st.size() > 0 && st.top() <= arr[i])  st.pop();
        //mark the ans in nge
        if(st.size() == 0) pge[i] = -1;
        else pge[i] = st.top();
        //push ans
        st.push(arr[i]);

    }

    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;



    return 0;
}