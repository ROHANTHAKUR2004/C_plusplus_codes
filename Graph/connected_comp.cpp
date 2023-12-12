#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;

int v;
vector<list<int>> graph;

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void dfs(int node, unordered_set<int> &visited)
{
    visited.insert(node);
    for (auto neighbor : graph[node])
    {
        if (not visited.count(neighbor))
        {
            dfs(neighbor, visited);
        }
    }
}

int cc()
{
    int result = 0;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        if (visited.count(i) == 0)
        {
            result++;
            dfs(i, visited);
        }
    }
    return result;
}
int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    cout << cc() << endl;
}