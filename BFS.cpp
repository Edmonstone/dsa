#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n = 10;
    int m = 9;
    std::vector<int> adj[n + 1];

    // Input edges
    int edges[][2] = {
        {1, 2},
        {1, 6},
        {2, 3},
        {2, 4},
        {6, 7},
        {6, 9},
        {4, 5},
        {7, 8},
        {5, 8}
    };

    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        std::cout << "Adjacency of Node " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            std::cout << adj[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}



vector<int> bfsOfgraph(int v,vector?<int> adj[]){
    int vis[n] = 1;
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push(node);
        for(auto x:adj[node]){
            if(!vis[x]){
                vis[x] = 1;
                q.push(x);
            }
        }
    }
    return bfs;
}