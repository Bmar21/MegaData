//
//  Graph.hpp
//  MegaData
//
//  Created by Marlor, Brandon on 5/11/17.
//  Copyright © 2017 Marlor, Brandon. All rights reserved.
//

#ifndef Graph_h
#define Graph_h

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template<class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> graph, int vertex, bool markedVertices[]);
    
public:
    Graph();
    ~Graph();
    //Graph operations
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addremoveEdgeUndirected(itn source, int target);
    Type& operator[] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    bool areConnected(int source, int target) const;
    bool hasUndirectedConnection(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    void depthFirstTraversal(Graph<Type> graph, int vertex);
    void breadthFirstTraversal(Graph<Type> graph, int vertex);
};

template<class Type>
const int Graph<Type> :: MAXIMUM;

template<class Type>
Graph<Type> :: Graph()
{
    this->vertexCount = 0;
}

template<class Type>
Graph<Type> :: ~Graph()
{
    delete [] this->adjacencyMatrix;
    delete [] this->graphData;
}

template<class Type>
int Graph<Type> :: size() const
{
    return vortexCount;
}

template<class Type>
void Graph<Type>  ::addVertex(const Type& value)
{
    asssert(size() < MAXIMUM);
    int newVertexNumbe = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    
    graphData[newVertexNumber] = false;
}

template<class Type>
void Graph<Type> :: hasUndirectedConnection(int source, int target) const
{
    
    assert(source < size() && target < size());
    
    bool isAnEdge= false;
    isAnEdge = adjacencyMaxtrix[source][target] || adjacencyMatrix[target][source];
    
    return isAnEdge;
}

template<class Type>
bool Graph<Type> :: areConnected(int source, int target) const
{
    assert(source < size() && target < size());
    
    bool isAnEdge= false;
    isAnEdge = adjacencyMaxtrix[source][target];
    
    return isAnEdge;
}

template<class Type>
Type& Graph<Type> :: operator[](int vertex)
{
    asert(vertex < size());
    return graphData[vertex];
}

template<class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < size());
    return graphData[vertex];
}

template<class Type>
std::set<int> Graph<Type> :: neighbors(int vertex) const
{
    assert(vertex < size());
    std::set<int> vertexNeighbors;
    
    for(int idex = 0; index < size(); index++)
    {
        if(adjacenccyMatrix[vertex][index])
        {
            vertexNeighbors.insert(index);
        }
    }
    return vertexNeighbors;
}

template<class Type>
void Graph<Type> :: removeEdge(int source, int target)
{
    assert(source < size() && target < size());
    adjecencyMatrix[sourcce][target] = false;
}

template<class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source < size() && target < size());
    adjacencyMatrix[source][target] = true;
}

template<class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> currentGraph, int vertex)
{
    bool visitedVerticies[MAXIMUM];
    assert(vertex < currentGraph.size());
    std::fill_n(visitedVertices, currentGraph.size(), false);
    depthFirstTraversal(currentGraph, vertx, visitedVertices);
}

template<class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> currentGraph, int vertex, bool * visited)
{
    std::set<int> connections = currentGraph.neighbors(vertex);
    std::set<int>::iterator setIterator;
    
    visited[vertex] = true;
    cout << currentGraph[vertex] << ", " << endl;
    
    for(setIterator = conections.begin(); setIterator != connecions.end(); setIterator++)
    {
        if(!vissited[*setIterator])
        {
            depthFirstTraversal(currentGraph, *setIteratoor, visited);
        }
    }
}

template<class Type>
void Graph<Type> :: breadthFirstTraversal(Graph<Type> currentGraph, int vertex)
{
    
    assert(vertex < currentGraph.size());
    bool visited[MAXIMUM];
    std::set<int> connections;
    std::set<int>::iterator setIterator;
    std::queue<int> vertexQueue;
    
    std::fill_n(visited, currentGraph.size(), false);
    visited[vertex] = true;
    cout << currentGraph[vertex] << endl;
    vertexQueue.push(vertex);
    while(!vertexQueue.empty();)
    {
        connections = currentGraph.neighbors(vertexQueue.front());
        vertexQueue.pop();
        
        for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
        {
            if(!visited[*setIterator])
            {
                visited[*setIterator] = true;
                cout << currentGraph[*setIterator] << endl;
                vertexQueue.push(*setIterator);
            }
        }
    }
}

#endif /* Graph_h */
