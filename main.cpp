#include <iostream>
#include "Graph.h"
using namespace std;

int main() {
    Graph g;
    g.addVertex(0);
    g.addVertex(2);
    g.addVertex(1);
    g.addVertex(4);
    g.addVertex(3);
    g.addVertex(5);
    g.addConnection(0,1);
//    g.addConnection(0,4);
   // g.addConnection(0,2);
    g.addConnection(1,2);
 //   g.addConnection(2,0);
    g.addConnection(2,3);
    g.addConnection(3,4);
    g.addConnection(4,5);
    g.bfs_search(2);
    g.dfs_search(0);
    g.isTree()? cout<<"is tree"<<endl: cout << "not a tree"<<endl ;
    g.isConnectedDFS()? cout<<"is connected using dfs"<<endl: cout<<"is not connected using dfs"<<endl;
    g.print();
    puts("end of test");
    return 0;
}
