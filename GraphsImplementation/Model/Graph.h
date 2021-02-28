class Graph {
private:
    int size;
    int** matrix;
    
    int** initialize_matrix(int size) {
        int** matrix = (int**) calloc(size, sizeof(int*) * size);
        
        for (int i = 0; i < size; i++) {
            matrix[i] = (int*) calloc(size, sizeof(int));
            
            for(int j = 0; j < size; j++) {
                matrix[i][j] = i;
            }
        }
        
        return matrix;
    }
    
public:
    Graph(int size) {
        this->size = size;
        this->matrix = initialize_matrix(size);
    }
    
    void link_vertices(int origin, int destination) {
        this->matrix[origin][destination] = 1;
        this->matrix[destination][origin] = 1;
        
        this->debug();
    }
    
    void debug() {
        for (int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int value = matrix[0][0];
                
                std::cout << value;
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    };
};
