#include<iostream>
#include<vector>
using namespace std;

class Maxheap{
    vector<int> hp;
    int i;
public:
     void upheapify(int ci){
           while(ci > 0){
            int pi = (ci-1)/2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi],hp[ci]);
                ci = pi;
            }
            else break;
           }   
     }

     void push(int ele){
        hp.push_back(ele);
        upheapify(hp.size()-1);
        
     }

     void pop(){
        if(empty()) return ;
        swap(hp[0],hp[hp.size()-1]);
        i--;
        if(!empty()) {
            downheapfiy(0,i);
        }
     }

     void  downheapfiy(int idx,int bound){
           while(idx<hp.size()){
               int lc = 2*idx+1;
               int rc = 2*idx+2;
               if(lc >bound) break;
               int maxel = idx;
               if(hp[lc]>hp[maxel]){
                  maxel  = lc;
            }
            if(rc < bound && hp[rc]>hp[maxel]){
                  maxel = rc;
            }
            if(maxel!=idx){
               swap(hp[idx],hp[maxel]);
               idx  = maxel;
            }
            else break;
           }
     }


      int peek(){
         if(empty()) return INT16_MIN;
         return hp[0];
      }

      bool empty(){
         return hp.size()==0;
      }
      
      void display(){
         for(int j=0;j<i;j++){
               cout<<hp[j]<<" ";
         }
      }
      Maxheap(vector<int> v){
        hp = v;
        int n = hp.size();
        i = n-1;
        for(int j=n/2;j>=0;j--){
            downheapfiy(j,i);
        }
      }
      vector<int> heapsort(){
        int sz = hp.size();
        while(sz>0){
            int el = 0;
            swap(hp[el],hp[i]);
            i--;
            sz--;
            downheapfiy(0,i);
        }
        return hp;
      }
};
      
      
      void heapsort(vector<int> &v){
        Maxheap hp(v);
        v = hp.heapsort();
      }
      
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    v.push_back(19);
    v.push_back(18);
    v.push_back(3);
    v.push_back(4);
    v.push_back(10);
    v.push_back(50);
    v.push_back(6);
    heapsort(v);
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
}



