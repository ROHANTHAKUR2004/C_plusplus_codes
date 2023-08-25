#include<iostream>
#include<vector>
using namespace std;

class Maxheap{
    vector<int> hp;
public:
     void unheapify(int ci){
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
        unheapify(hp.size()-1);
        
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
};
int main(){
    Maxheap hp;
    hp.push(3);
    hp.push(4);
    hp.push(8);
    hp.push(9);
    hp.push(14);
    hp.push(54);
    hp.push(18);
    hp.display();
    cout<<endl;
    hp.pop();
    hp.display();

}

