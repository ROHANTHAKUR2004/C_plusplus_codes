#include<iostream>
#include<string>
using namespace std;
int main(){


   string s;
   getline(cin,s);
    
     int n = s.size();
   for(int i=1;i<n;i+=2){
    s[i]= '#';
   }
cout<<s<<endl;

    return 0;
}