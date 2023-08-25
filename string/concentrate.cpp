#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

   string s;
   getline(cin,s);
   

   string temp = s;
   reverse(temp.begin(),temp.end());
   s += temp;
   cout<<s<<endl;

   
    return 0;
}