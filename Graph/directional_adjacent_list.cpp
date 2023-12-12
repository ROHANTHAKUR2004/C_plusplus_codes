#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> d_graph;
int v; // vertex;

void add_edge(int src,int dest,bool bi_derct = true){
    d_graph[src].push_back(dest);
    if(bi_derct){
        d_graph[dest].push_back(src);
    }
}

void display(){
    for(int i=0;i<d_graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : d_graph[i]){
            cout<<el<< " , ";
        }
        cout<<endl;
    }
}


int main(){
    cin>>v;
    d_graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;

        add_edge(s,d,false);
    }
    display();
}