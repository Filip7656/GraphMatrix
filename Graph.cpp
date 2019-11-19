#include <iostream>
#include <vector>
#include <list>
#include "Graph.h"
using namespace std;

void Graph::addVertex(int vertex) {

    //firts check if your graph doesn't already contain vertex
    for (auto &vertex_ : vertices)
        if(vertex == vertex_.getIndex()){
            cout << "the graph already contains vertex " << vertex << endl;
            return;
        }
    //if not add it
    vertices.emplace_back(vertex);
}


void Graph::delVertex(int vertex) {

    //if the graph is empty there is nothing to delete
    if(vertices.empty()){
        cout << "the graph is empty" << endl;
        return;
    }

    //you can't delete a vertex which is not in the graph
    if(!contains(vertex)){
        cout << "there is no vertex " << vertex << endl;
        return;
    }

    //delete all edges connected to vertex
    for (auto &vertex_ : vertices) {
        if(vertex_.contains(vertex))
            vertex_.unpair(vertex);
    }

    //delete vertex
    vertices.erase(vertices.begin()+indexValue(vertex));
}


void Graph::addConnection(int a, int b) {

    //check if the graph contains given vertices
    if(this->contains(a) && this->contains(b)){
        //there is no edge connecting a vertex to itself
        if(a==b){
            cout << "you can't connect a vertex to itself" << endl;
            return;
        }

        //this connection might already exist
        if(vertices[indexValue(a)].contains(b))
            return;

        //make edges a-b, b-a
        vertices[indexValue(a)].pair(b);
        vertices[indexValue(b)].pair(a);
    }
    else
        cout << "invalid vertices" << endl;
}


void Graph::delConnection(int a, int b) {

    //check if the graph contains given vertices
    if(this->contains(a) && this->contains(b)){

        //there is no edge connecting a vertex to itself
        if(a==b){
            cout << "there is no such connection" << endl;
            return;
        }

        //delete edges
        if(vertices[indexValue(a)].contains(b))
            vertices[indexValue(a)].unpair(b);
        if(vertices[indexValue(b)].contains(a))
            vertices[indexValue(b)].unpair(a);
        else
            cout << "there is no such connection" << endl;
    }
    else
        cout << "invalid vertices" << endl;
}


bool Graph::contains(int a) {

    //check in the graph if it contains vertex a
    for (auto &vertex : vertices) {
        if(a == vertex.getIndex()){
            return true;
        }
    }
    return false;
}


void Graph::print() {
    if(isConnected())
        cout << "this graph is connected" << endl;
    else
        cout << "this graph is not connected" << endl;

    if(isEulerian())
        cout << "this graph is eulerian" << endl;
    else
        cout << "this graph is not eulerian" << endl;

    for (auto &vertex : vertices) {
        cout << vertex.getIndex() << ": ";
        vertex.print();
    }
    cout<<endl;
}


int Graph::indexValue(int a) {

    //return coordinate of 'a' in vertices
    for(int x = 0; x < vertices.size(); x++){
        if(vertices[x].getIndex() == a)
            return x;
    }
    return 0;
}


bool Graph::isEven() {

    //for every vertex check if it is of an even degree
    for (auto &vertex : vertices) {
        if(!vertex.isEven()){
            return false;
        }
    }
    return true;
}


bool Graph::common_neighbour(int a, int b) {

    //take every vertex connected to 'a'
    for(int x = 0; x<vertices[indexValue(a)].getConnecions().size(); x++){
        //if any of these verieces is connected to 'b' you're home
        if(vertices[indexValue(b)].contains(vertices[indexValue(a)].getConnecions()[x]))
            return true;
    }
    return false;
}


Graph Graph::retSqr() {

    //make a copy of your graph
    Graph a = *this;

    //take every vertex in vertices
    for(int x = 0; x<vertices.size();x++){

        //take every other vertex "behind" 'x' (this is why y=x+1)
        for(int y = x+1; y<vertices.size(); y++){

            //check if they have a common neighbour
            if(common_neighbour(vertices[x].getIndex(),vertices[y].getIndex()))

                //if they do, connect them
                a.addConnection(vertices[x].getIndex(),vertices[y].getIndex());
        }
    }
    return a;
}


Graph Graph::retCube() {

    //make a new graph equal to your graph^2
    Graph b = this->retSqr();

    //go to every vertex in vertices
    for(int x = 0; x<vertices.size(); x++){

        //for every of these verieces go through their connections
        for(int y = 0; y<vertices[x].getConnecions().size(); y++){

            //check if any of these has a common neighbour with the remaining ones
            for(int z = x+1; z<vertices.size(); z++){
                if(common_neighbour(vertices[x].getConnecions()[y],vertices[z].getIndex()))

                    //if they do make a connection between 'x' and 'z' (note not 'y' and 'z')
                    b.addConnection(vertices[x].getIndex(),vertices[z].getIndex());
            }
        }
    }
    return b;
}

bool Graph::isConnected() {
    //if any vertex has degree zero the graph is not connected
    for (auto &vertex : vertices)
        if(vertex.getConnecions().empty())
            return false;


    vector<int> collection;
    collection.push_back(vertices[0].getIndex());

    for(int x = 0; x< vertices[0].getConnecions().size(); x++)
        collection.push_back(vertices[0].getConnecions()[x]);


    int a = 1;

    while(collection.size() > a) {
        vector<int> toCheck = vertices[this->indexValue(collection[a])].getConnecions();
        vector<int> toAdd;

        for (int x : toCheck) {
            int b = 1;
            for (int y : collection) {
                if(x == y)
                    b = 0;
            }
            if(b==1)
                toAdd.push_back(x);
        }

        for(int x = 0; x < toAdd.size(); x++)
            collection.push_back(toAdd[x]);

        a++;
    };

    return collection.size() == vertices.size();
}

bool Graph::isEulerian() {
    //a graph is eulerian when it is connected and every vertex is of an even degree
    return isConnected() && isEven();
}

void Graph::bfs_search(int a) {
    auto size = vertices.size();
    bool *visited = new bool[size];
    for(int i = 0; i < size; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[a] = true;
    queue.push_back(a);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    vector<Vertex>::iterator i;
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        a = queue.front();
        cout << a << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        auto connections = vertices[a].getConnecions();
        for(int i = 0; i< connections.size();i++){
            if(!visited[i]) {
                visited[i] = true;
                queue.push_back(i);
            }
        }

    }
    cout << " <- BFS SEARCH";
    cout << endl;
}

void Graph::dfs_search(int a) {
    auto size = vertices.size();
    bool *visited = new bool[size];
    for(int i = 0; i < size; i++)
        visited[i] = false;
    dfs_searchUtil(a,visited);
    cout << " <- DFS SEARCH";
    cout << endl;
}

void Graph::dfs_searchUtil(int a, bool visited[]) {
    visited[a] = true;
    cout<< a << " ";

    auto connections = vertices[a].getConnecions();
    for(int i = 0; i< connections.size();i++){
        if(!visited[i]) {
            dfs_searchUtil(i,visited);
        }
    }
}

bool Graph::isTree() {
    auto size = vertices.size();
    bool *visited = new bool[size];
    for (int i = 0; i < size; i++)
        visited[i] = false;

    if (isTreeUtil(0, visited, -1))
        return false;

    // If we find a vertex which is not reachable from 0
    // (not marked by isCyclicUtil(), then we return false
    for (int u = 0; u < size; u++)
        if (!visited[u])
            return false;

    return true;
}

bool Graph::isTreeUtil(int v, bool visited[], int parent) {
    // Mark the current node as visited
    visited[v] = true;

    // Recur for all the vertices adjacent to this vertex
    auto connections = vertices[v].getConnecions();
    for(int i = 0; i< connections.size();i++)
    {
        // If an adjacent is not visited, then recur for
        // that adjacent
        if (!visited[i])
        {
            if (isTreeUtil(i, visited, v))
                return true;
        }
            // If an adjacent is visited and not parent of current
            // vertex, then there is a cycle.
        else if (i != parent)
            return true;
    }
    return false;
}

bool Graph::isConnectedDFS() {
    auto size = vertices.size();
    static bool *visited = new bool[size];

    for(int i =0; i<=size ; i++) {
        for(int z =0; z<size ; z++)
            visited[z] = false;

        dfs_searchUtil(i,visited);
cout << endl;
        for(int u =0; u<=size; u++){
            cout << visited[u] << " is visited "<<u<<endl;
            if(!visited[u])
               return false;
          }

    }
    return true;
};














