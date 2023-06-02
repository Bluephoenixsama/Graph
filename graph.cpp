#include <iostream>
#include <stdio.h>
#include <string>
#include "graph.h"

bool Graph::isEmpty()
{
    if (numVertices == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Graph::isDirected()
{
    bool isDirected = true;
    for (int i = 0; i < numVertices; i++)
    {
        for (int j = 0; j < numVertices; i++)
            if (adjMatrix[i][j] == adjMatrix[j][i])
            {
                return true;
            }
            else
            {
                return false;
            }
    }
}

void Graph::addVertex(vertex newVertex)
{
    numVertices++;
    adjMatrix[newVertex.index][newVertex.index] = true;
}

void Graph::addEdge(vertex vertex1, vertex vertex2)
{
    adjMatrix[vertex1.index][vertex2.index] = true;
    adjMatrix[vertex2.index][vertex1.index] = true;
}

void Graph::removeVertex(vertex vertexToRemove)
{
    for (int i = 0; i < numVertices; i++)
    {
        adjMatrix[vertexToRemove.index][i] = false;
        adjMatrix[i][vertexToRemove.index] = false;
    }
}

void Graph::removeEdge(vertex vertex1, vertex vertex2)
{
    adjMatrix[vertex1.index][vertex2.index] = false;
    adjMatrix[vertex2.index][vertex1.index] = false;
}

int Graph::NumVertices()
{

    return numVertices;
}

int Graph::numEdges()
{
    int count = 0;
    for (int i = 0; i < numVertices; i++)
    {
        for (int j = 0; j < numVertices; j++)
        {
            if (adjMatrix[i][j])
            {
                count++;
            }
        }
    }
    if (!isDirected())
    {
        count /= 2;
    }
    return count;
}

int Graph::indegree(vertex v)
{
    int indegreeCount = 0;
    for (int i = 0; i < numVertices; i++)
    {
        if (adjMatrix[i][v.index])
        {
            indegreeCount++;
        }
    }
    return indegreeCount;
}

int Graph::outdegree(vertex v)
{
    int outdegreeCount = 0;
    for (int i = 0; i < numVertices; i++)
    {
        if (adjMatrix[v.index][i])
        {
            outdegreeCount++;
        }
    }
    return outdegreeCount;
}

int Graph::degree(vertex v)
{
    int degreeCount = 0;
    for (int i = 0; i < numVertices; i++)
    {
        if (adjMatrix[v.index][i] || adjMatrix[i][v.index])
        {
            degreeCount++;
        }
    }
    return degreeCount;
}

std::vector<vertex> Graph::neighbors(vertex v)
{
    std::vector<vertex> neighborVertices;
    for (int i = 0; i < numVertices; i++)
    {
        if (adjMatrix[v.index][i])
        {
            neighborVertices.push_back(vertexList[i]);
        }
    }
    return neighborVertices;
}

bool Graph::neighbour(vertex vertex1, vertex vertex2)
{
    return adjMatrix[vertex1.index][vertex2.index];
}

// idasojdaspjdpas//