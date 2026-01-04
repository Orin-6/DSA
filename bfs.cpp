#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(const vector<vector<int>> &adj, int start_node)
{
    vector<bool> visited(adj.size(), false);
    queue<int> q;

    visited[start_node] = true;
    q.push(start_node);

    while (!q.empty())
    {
        int u = q.front();
        cout << u << " ";
        q.pop();

        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    int V = 4;
    vector<vector<int>> adj(V); // Adjacency list
    adj[0] = {1, 2};
    adj[1] = {2};
    adj[2] = {0, 3};
    adj[3] = {3};

    cout << "BFS starting from vertex 2: ";
    bfs(adj, 2);
    cout << endl;
    return 0;
}
/*#include <iostream>   // For input-output
#include <vector>     // For adjacency list
#include <queue>      // For queue used in BFS

using namespace std;

// BFS function to traverse the graph
void bfs(const vector<vector<int>> &adj, int start_node)
{
    // Array to track visited vertices
    vector<bool> visited(adj.size(), false);

    // Queue for BFS traversal (FIFO)
    queue<int> q;

    // Mark starting node as visited and push into queue
    visited[start_node] = true;
    q.push(start_node);

    // Continue BFS until queue is empty
    while (!q.empty())
    {
        // Get front element of queue
        int u = q.front();
        q.pop();

        // Print current vertex
        cout << u << " ";

        // Traverse all adjacent vertices of current vertex
        for (int v : adj[u])
        {
            // If vertex is not visited
            if (!visited[v])
            {
                visited[v] = true; // Mark as visited
                q.push(v);         // Add to queue
            }
        }
    }
}

int main()
{
    int V, E;

    // Take number of vertices from user
    cout << "Enter number of vertices: ";
    cin >> V;

    // Take number of edges from user
    cout << "Enter number of edges: ";
    cin >> E;

    // Create adjacency list
    vector<vector<int>> adj(V);

    // Take edges as input
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);   // For directed graph
        // adj[v].push_back(u); // Uncomment for undirected graph
    }

    int start_node;

    // Take starting node for BFS
    cout << "Enter starting node for BFS: ";
    cin >> start_node;

    // Perform BFS traversal
    cout << "BFS traversal: ";
    bfs(adj, start_node);

    return 0;
}
*/