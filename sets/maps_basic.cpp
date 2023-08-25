#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  
   unordered_map<string,int> m;
   m["Rohan"] = 1;
   m["Ronit"] = 2;
   m["raj"]  = 3;

    if(m.find("n")!=m.end()){
        cout<<"yes"<<endl;
    }
   else cout<<"no"<<endl;

   cout<<m.size()<<endl;
   for(auto p : m){
       cout<<p.first<<" "<<p.second<<endl; 
   }
   cout<<endl;
   m.erase("raj");
    for(auto p : m){
       cout<<p.first<<" "<<p.second<<endl; 
   }

}