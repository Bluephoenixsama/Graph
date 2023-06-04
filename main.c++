#include <iostream>
#include "graph.h"
using namespace std;

int main()
{
    Graph graph(10);
    vertex v1, v2;

    cout << "Number of vertices: " << graph.NumVertices() << endl;

    v1.index = 0;
    v2.index = 1;

    graph.addEdge(v1, v2);
    cout << "Number of edges: " << graph.numEdges() << endl;

    v1.index = 0;
    vector<vertex> neighbors = graph.neighbors(v1);
    cout << "Neighbors of vertex " << v1.c << ": ";
    for (const auto &neighbor : neighbors)
    {
        cout << neighbor.c << " ";
    }
    cout << endl;

    return 0;
}
