class DirectedGraph : public Graph {

public:
    DirectedGraph(int size) : Graph(size) {};
    
    void link_vertices(int origin, int destination) {
        set_matrix_value(origin, destination, 1);
    }
};
