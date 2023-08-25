#include<iostream>
#include<vector>
using namespace std;

class Maxheap{
    vector<int> hp;
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
        hp.pop_back();
        if(!empty()) downheapfiy(0);

     }

     void  downheapfiy(int idx){
           while(idx<hp.size()){
               int lc = 2*idx+1;
               int rc = 2*idx+2;
               if(lc>hp.size()) break;
               int maxel = idx;
               if(hp[lc]>hp[maxel]){
                  maxel  = lc;
            }
            if(rc<hp.size() && hp[rc]>hp[maxel]){
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
         for(int i=0;i<hp.size();i++){
               cout<<hp[i]<<" ";
         }
      }
      Maxheap(vector<int> v){
        hp = v;
        for(int i=0;i<hp.size();i++){
            upheapify(i);
        }
      }
      
};
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    v.push_back(19);
    v.push_back(25);
    v.push_back(18);
    Maxheap hp(v);
    hp.display();

}

