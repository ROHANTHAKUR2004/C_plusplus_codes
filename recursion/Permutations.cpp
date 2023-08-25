#include<iostream>
#include<string>
using namespace std;
void permu(string ans,string str){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permu(ans+ch,left+right);

    }
    }
int main(){
    string str = "abc";
    permu("",str);
}