#include <iostream>
using namespace std;

#define MAX_NODES 100

void addEdge(int adj[][MAX_NODES], int u, int v)
{
    adj[u][v] = 1;
    adj[v][u] = 1;
}

void BFS(const int adj[][MAX_NODES], int start, int V)
{
    bool visited[MAX_NODES] = { false };
    int queue[MAX_NODES], front = -1, rear = -1;

    visited[start] = true;
    queue[++rear] = start;

    while (front != rear)
    {
        int u = queue[++front];

        cout << u << " ";

        for (int v = 1; v <= V; v++)
        {
            if (adj[u][v] && !visited[v])
            {
                visited[v] = true;
                queue[++rear] = v;
            }
        }
    }
}

int main()
{
    int n, e, strt, fnsh, st;
    cout << "Enter no. of nodes: ";
    cin >> n;
    cout << "Enter no. of edges: ";
    cin >> e;

    int adj[MAX_NODES][MAX_NODES] = { 0 };

    for (int i = 1; i <= e; i++)
    {
        cout << "Enter the start and end node of edge " << i << ": ";
        cin >> strt >> fnsh;
        addEdge(adj, strt, fnsh);
    }

    cout << "Enter the starting node for the traversal: ";
    cin >> st;

    cout << "\nBFS using adjacency matrix: ";
    BFS(adj, st, n);
    cout << endl;

    return 0;
}
