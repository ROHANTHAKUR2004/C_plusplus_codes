#include<iostream>
using namespace std;
int findsum(int c,int l){
    if(c>l) return 0;
    if(c%2==0) return findsum(c+1,l);
    return c+findsum(c+2,l);

}
int main(){
    int a,b;
    cin>>a>>b;

    cout<<findsum(a,b)<<endl;
    return 0;

}