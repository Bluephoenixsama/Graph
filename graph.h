#include <stdio.h>
#include <vector>
#ifndef graph_h
#define graph_h
#include <iostream>
using namespace std;
struct vertex
{

    char c;
    int index;
};

class Graph
{
private:
    bool **adjMatrix;
    int numVertices;

public:
    Graph()
    {
        numVertices = 0;
    }
    Graph(int numVertices)
    {
        this->numVertices = numVertices;
        adjMatrix = new bool *[numVertices];
        for (int i = 0; i < numVertices; i++)
        {
            adjMatrix[i] = new bool[numVertices];
            for (int j = 0; j < numVertices; j++)
                adjMatrix[i][j] = false;
        }
    }
    bool isEmpty();
    bool isDirected();
    void addVertex(vertex newVertex);
    void addEdge(vertex vertex1, vertex vertex2);
    void removeVertex(vertex vertexToRemove);
    void removeEdge(vertex vertex1, vertex vertex2);
    int NumVertices();

    int numEdges();
    int indegree(vertex);
    int outdegree(vertex);
    int degree(vertex);
    vector<vertex> neighbors(vertex);
    bool neighbour(vertex vertex1, vertex vertex2);
};

#endif