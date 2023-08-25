#include<iostream>
#include<stack>
using namespace std;

// void print(stack<int>&st){
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

//get ele after poping;

void print(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    //put ele back from temp to st
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }
        cout<<endl<<st.top()<<endl;
}
int main(){
     stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);




    return 0;
}
