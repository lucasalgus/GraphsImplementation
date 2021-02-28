#include <iostream>

#include "Model/Graph.h"

int main(int argc, const char * argv[]) {
    Graph* g = new Graph(5);
    
    g->debug();
    
    g->link_vertices(1, 3);
    
    g->debug();
    
    g->add_vertice();
    g->link_vertices(5, 3);
    
    g->debug();
    
    return 0;
}
