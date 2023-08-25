#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
      string s;
      cout<<" s is : ";
      getline(cin,s);

     int n = s.size();
     
      //bubble sort
      for(int i=0;i<s.size()-1;i++){ 
         for(int j=0;j<s.size()-1-i;j++){ // 
            if(s[j]>s[j+1]){
            swap(s[j],s[j+1]);
              }
          } 
      }
    cout<<endl;
    
        cout<<s<<" ";

return 0;
}