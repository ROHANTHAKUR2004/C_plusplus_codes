#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){


int x;
cout<<" sum ele : ";
cin>>x;

vector<int> v;
int n;
cout<<" a size : ";
cin>>n;

cout<<" a ele : " ;
for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
}
// checking sum ;

for (int i=0;i<= v.size()-2;i++){
    for(int j=i+1;j<= v.size()-1;j++){
     if (v[i]+v[j] == x){
  
       cout<<"("<<i<<","<<j<< ")"<<endl;
       
     }
    }
    
}





}