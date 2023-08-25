#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans,string original,vector<string> &v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true) subset(ans+ch,original.substr(1),v,true);
        subset(ans,original.substr(1),v,true);
        return;
    }
    char dh = original[1];
    if(ch == dh){  // duplicate
        if(flag == true) subset(ans+ch,original.substr(1),v,true);
         subset(ans,original.substr(1),v,true);
    }
    else{
        if(flag == true) subset(ans+ch,original.substr(1),v,true);
         subset(ans,original.substr(1),v,true);
    }

    }


int main(){
    string str = "aab";
    vector<string> v;
    subset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}