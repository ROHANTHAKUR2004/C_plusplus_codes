#include<iostream>
#include<algorithm>
using namespace std;
 //int bit(int n){
  //  return __builtin_popcount(n);
 //}
 int countbit(int n){
    int c = 0;
    while(n>0){
        c++;
        n = (n &(n-1));
    }
    return c;
 }
int main(){
    //cout<<bit(13)<<endl;
    cout<<countbit(15)<<endl;
    return 0;
}