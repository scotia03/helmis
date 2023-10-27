#include <iostream>

// Fungsi untuk melakukan translasi pada titik (x, y)
void translasi(double matrix[2][3], double x, double y) {
    double translation_matrix[2][3] = {{1, 0, x},
                                        {0, 1, y}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            double sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += matrix[i][k] * translation_matrix[k][j];
            }
            matrix[i][j] = sum;
        }
    }
}

int main() {
    // Matriks awal dengan titik A(3,4) dan B(4,9)
    double matrix[2][3] = {{3, 4, 1},
                          {4, 9, 1}};

    // Implementasi translasi dengan x=2 dan y=3
    translasi(matrix, 2, 3);
    // Titik A dan B setelah translasi
    double titik_A[2] = {matrix[0][0], matrix[0][1]};
    double titik_B[2] = {matrix[1][0], matrix[1][1]};

    std::cout << "Titik A setelah translasi: (" << titik_A[0] << ", " << titik_A[1] << ")" << std::endl;
    std::cout << "Titik B setelah translasi: (" << titik_B[0] << ", " << titik_B[1] << ")" << std::endl;

    return 0;
}