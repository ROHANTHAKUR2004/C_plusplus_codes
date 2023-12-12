#include<iostream>
#include<vector>
#include<list>
using namespace std;


vector<list<pair<int, int > > > w_graph;
int v;

void add_edge(int src,int dest,int wt, bool bi_dir = true){
    w_graph[src].push_back({dest,wt});
    if(bi_dir){
        w_graph[dest].push_back({src,wt});
    }
}

void display(){
    for(int i=0;i<w_graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : w_graph[i]){
            cout<<"("<<el.first<< " "<<el.second<<" ) , ";
        }
        cout<<endl;
    }

    }


int main(){
    cin>>v;
    w_graph.resize(v, list<pair<int, int> >() );
    int e;
    cin>>e;
    while(e--){
    int s,d,w;
    cin>>s>>d>>w;
    add_edge(s,d,w);
}
  display();

}