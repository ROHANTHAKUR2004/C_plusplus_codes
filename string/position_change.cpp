#include<iostream>
#include<string>
using namespace std;

 int main(){

     string s;
     cout<< " s is : ";
     getline(cin,s);
      cout<<s<<endl;

     for(int i=0; s[i]!='\0';i++){
        if(i%2==0)   s[i]='m'; 
             }
             cout<<s<<endl;

    return 0;
 }