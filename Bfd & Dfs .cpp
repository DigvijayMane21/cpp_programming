#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{

public:
	map<int, bool> visited;
	map<int, list<int> > adj;
	void addEdge(int v, int w);
	void DFS(int v);
};


void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}


void Graph::DFS(int v)
{
	visited[v] = true;
	cout << v << " ";

	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}


int main()
{
	Graph g;
	int strt,num_edges,num_nodes;
	cout << "Enter the number of nodes: ";
    cin >> num_nodes;
    cout << "Enter the number of edges: ";
    cin >> num_edges;
    for (int i = 0; i < num_edges; i++)
    {
        int src, dest;
        cout << "Enter the source and destination node of edge " << i + 1 << ": "<<endl;
        cin >> src >> dest;
        g.addEdge(src,dest);
    }
	cout<<"Enter the starting node: "<<endl;
	cin>>strt;

	cout << "Following is Depth First Traversal"
			" (starting from vertex "<<strt<<" ) \n";

	g.DFS(strt);

	return 0;
}

