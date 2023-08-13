#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    int V;
    vector<int> *adj;
public:
    Graph(int V);
    void addEdge(int u, int v);
    bool isConnected();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool Graph::isConnected()
{
    bool *visited = new bool[V];
    for(int i=0; i<V; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    q.push(0);
    visited[0] = true;
    int count = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!visited[v])
            {
                visited[v] = true;
                q.push(v);
                count++;
            }
        }
    }
    delete [] visited;
    return (count == V);
}

int main()
{
    int n,e,f,r;
    cout<<"Enter the no. of nodes: ";
    cin>>n;
    cout<<"Enter the no. of edges: ";
    cin>>e;
    Graph g(n);
    for(int i=1;i<=e;i++)
    {
        cout<<"Enter the starting and ending node of the edge "<<i<<" :"<<endl;
        cin>>f>>r;
        g.addEdge(f, r);
    }

    if(g.isConnected())
        cout << "The graph is connected." << endl;
    else
        cout << "The graph is not connected." << endl;
    return 0;
}

