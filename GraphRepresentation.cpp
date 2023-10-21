#include <iostream>
using namespace std;
#include <vector>

// Graph using adjacency matrix!!!
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> adj[n+1];
    for(int i =0;i<m;i++){
        int u,v;
        //if directed u ----> v then don't do sexcond push
        cin>>u >>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i < m; i++) {
        cout << "Adjacency list for node " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
/*
    int adj[n + 1][m + 1]; // Use n+1 by n+1 matrix for n nodes

    // Initialize the adjacency matrix with zeros
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            adj[i][j] = 0;
        }
    }

    // Read edges and populate the adjacency matrix
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // Since it's an undirected graph
    }

    // Print the adjacency matrix (optional)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
*/
    return 0;
}
