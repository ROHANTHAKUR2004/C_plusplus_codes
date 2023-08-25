#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

  string str = " rohan is a maths teacher . he is a good mentor of DSA as well ";
   

  stringstream ss (str) ;
  string temp;

  vector<string> v;
   while(ss>>temp){
    v.push_back(temp);
   }
   cout<<endl;

   sort(v.begin(),v.end());

   int maxcount =0;
   int count =0;
   for(int i=0;i<v.size();i++){
     if(v[i]==v[i-1])  count++;
     else count =1;
     maxcount= max(maxcount,count);

   }
   //for printing max word
   count =1;
   for(int i=0;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count =1;

      

   
    if(count == maxcount);
    cout<<v[i]<<"  "<<maxcount<<endl;
   }
    return 0;
}