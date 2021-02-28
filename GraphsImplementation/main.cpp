#include <iostream>

#include "Model/Graph.h"
#include "Model/DirectedGraph.h"
#include "Model/WeightedGraph.h"
#include "Model/DirectedWeightedGraph.h"

int main(int argc, const char * argv[]) {
    DirectedGraph* g = new DirectedGraph(5);
    
    g->debug();
    
    g->link_vertices(1, 3);
    
    g->debug();
    
    g->add_vertice();
    g->link_vertices(5, 3);
    
    g->debug();
    
    return 0;
}
