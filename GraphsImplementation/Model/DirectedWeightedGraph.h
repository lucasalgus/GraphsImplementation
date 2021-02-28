class DirectedWeightedGraph : public Graph {

public:
    DirectedWeightedGraph(int size) : Graph(size) {};
    
    void link_vertices(int origin, int destination) {
        return;
    }
    
    void link_vertices(int origin, int destination, int weight) {
        set_matrix_value(origin, destination, weight);
    }
};
