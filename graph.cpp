#include <iostream>
#include <stdio.h>
#include <string>
#include "graph.h"

Graph(int n);

void addEdge(int i, int j)
{
    int adjMatrix[i][j];
    adjMatrix[i][j] = true;
    adjMatrix[j][i] = true;
}
void removeEdges(int i, int j)
{
    adjMatrix[i][j] = false;
    adjMatrix[j][i] = false;
}
void addVertices()
{
}
void isEmpty()
{
    if (numVertices == 0)
    {
        std::cout << "Graph is empty" << std::endl;
    }
    else
    {
        std::cout << "Graph is not empty" << std::endl;
    }
}
void isDirected()
{
    if (adjMatrix[i][j] == adjMatrix)
}