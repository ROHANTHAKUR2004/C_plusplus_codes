#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <unordered_set>
using namespace std;
int v;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void bfs(int src, int dest, vector<int> &dist)
{
    queue<int> q;
    visited.clear();
    dist.resize(v, INT16_MAX);
    dist[src] = 0;
    q.push(src);
    visited.insert(src);
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (auto neighbour : graph[curr])
        {
            if (not visited.count(neighbour))
            {
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
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
    int x, y;
    cin >> x >> y;
    vector<int> dist;
    bfs(x, y, dist);
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
}