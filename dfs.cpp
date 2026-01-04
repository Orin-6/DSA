#include <iostream>
#include <vector>

using namespace std;

void dfsUtil(int u, const vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfsUtil(v, adj, visited);
        }
    }
}

void dfs(const vector<vector<int>> &adj, int start_node)
{
    vector<bool> visited(adj.size(), false);
    dfsUtil(start_node, adj, visited);
}

int main()
{
    int V = 4;
    vector<vector<int>> adj(V);
    adj[0] = {1, 2};
    adj[1] = {2};
    adj[2] = {0, 3};
    adj[3] = {3};

    cout << "DFS starting from vertex 2: ";
    dfs(adj, 2);
    cout << endl;
    return 0;
}

/* #include <iostream>
#include <vector>
using namespace std;

// DFS utility (recursive function)
void dfsUtil(int u, const vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";

    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfsUtil(v, adj, visited);
        }
    }
}

// DFS function
void dfs(const vector<vector<int>> &adj, int start_node)
{
    vector<bool> visited(adj.size(), false);
    dfsUtil(start_node, adj, visited);
}

int main()
{
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> adj(V);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);   // directed graph
        // adj[v].push_back(u); // uncomment for undirected graph
    }

    int start_node;
    cout << "Enter starting node for DFS: ";
    cin >> start_node;

    cout << "DFS traversal: ";
    dfs(adj, start_node);

    return 0;
} */