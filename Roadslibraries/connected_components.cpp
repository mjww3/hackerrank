#include <stdio.h>
#include <iostream>
#include <list>
#include <string>
#include <vector>

///regarding the connected components
using namespace std;

class Graph{

public:
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void bfs(int s,bool visited[]);
	int connected_components();
	void addedge(int v,int w);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addedge(int v,int w)
{
	adj[v].push_back(w);
}

int Graph::connected_components()
{
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i] = false;
	}
	int count = 0;
	for(int i=0;i<V;i++)
	{

		if(visited[i]==false)
		{
			bfs(i,visited);
			count++;
		}
	}
	return count;
}

void Graph::bfs(int s,bool visited[])
{

	list<int> queue;
	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while(!queue.empty())
	{
		s = queue.front();
		queue.pop_front();

		for (i = adj[s].begin();i!=adj[s].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(7);
    g.addedge(0, 1);
    g.addedge(2, 3);
    g.addedge(3, 4);
    g.addedge(5,6);
 
    cout<<g.connected_components()<<endl;
 
    return 0;
}