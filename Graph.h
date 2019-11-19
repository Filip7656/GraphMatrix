
#include <cstdio>
#include <vector>
#include "Vertex.h"

using namespace std;

class Graph{
private:
    vector<Vertex> vertices;
public:
    //add a vertex to vertices
    void addVertex(int vertex);

    //delete a vertex from vertices
    void delVertex(int vertex);

    //connect two vertices
    void addConnection(int a, int b);

    //delete a connection between two vertices
    void delConnection(int a, int b);

    //check if your graph contains a given vertex
    bool contains(int a);

    //print vertices with their connections
    void print();

    //get position of a given vertex in vertices
    int indexValue(int a);

    //check if all vertices are of an even degree
    bool isEven();

    //check if the graph is connected
    bool isConnected();

    //check if the graph is eulerian
    bool isEulerian();

    //check if given vertices have a common neighbour in your graph
    bool common_neighbour(int a, int b);

    //return G^2
    Graph retSqr();

    //return G^3
    Graph retCube();

    void bfs_search(int a);
    void dfs_search(int a);
    void dfs_searchUtil(int a, bool visited[]);
    bool isTree();
    bool isTreeUtil(int v, bool visited[], int parent);
    bool isConnectedDFS();
};