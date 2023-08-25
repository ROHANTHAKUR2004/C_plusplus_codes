#include<iostream>
using namespace std;
int path(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return path(n-1)+path(n-2);

}
int main(){
    int n;
    cin>>n;
    cout<<path(n);
}