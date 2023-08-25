#include<iostream>
#include<string>
using namespace std;
void helper(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    helper(ans,original.substr(1));
    helper(ans+ch,original.substr(1));
}
int main(){
    string s ="abc";
    helper("",s);
}