#include<iostream>
#include<string>
#include<vector>
using namespace std;

 int main(){

      string s = "leetcode";
      //cout<<"s is: ";
     // getline(cin,s);

       
      vector<int> arr(26,0);
    for(int i=0;i<s.size();i++){
        int ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i>26;i++){
        if(arr[i]>mx) mx = arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int  ascii = i+97;
            char ch = (char)ascii;
       cout<<ch<<endl;
       cout<< mx<<endl;
        
        }
    }
    
       
        
    
    return 0;
 }