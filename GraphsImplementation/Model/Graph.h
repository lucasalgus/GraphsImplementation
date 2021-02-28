class Graph {
private:
    int size;
    int** matrix;
    
    int** initialize_matrix(int size) {
        int** new_matrix = (int**) calloc(size, sizeof(int*) * size);
        
        for (int i = 0; i < size; i++) {
            new_matrix[i] = (int*) calloc(size, sizeof(int));
            
            for(int j = 0; j < size; j++) {
                new_matrix[i][j] = 0;
            }
        }
        
        return new_matrix;
    }
    
    void copy_matrix(int** destination, int** origin) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1; j++) {
                destination[i][j] = origin[i][j];
            }
        }
    }
    
    void increment_matrix() {
        size++;
        
        int** new_matrix = initialize_matrix(size);
        copy_matrix(new_matrix, matrix);
        
        this->matrix = new_matrix;
    }
    
public:
    Graph(int size) {
        this->size = size;
        this->matrix = initialize_matrix(size);
    }
    
    void set_matrix_value(int i, int j, int value) {
        matrix[i][j] = value;
    }
    
    void add_vertice() {
        increment_matrix();
    }
    
    void link_vertices(int origin, int destination) {
        if (origin == destination) {
            return;
        }
        
        set_matrix_value(origin, destination, 1);
        set_matrix_value(destination, origin, 1);
    }
    
    void debug() {
        for (int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int value = matrix[i][j];
                
                std::cout << value;
                std::cout << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    };
};
