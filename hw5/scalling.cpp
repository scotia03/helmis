#include <iostream>

// Fungsi untuk melakukan scaling pada titik (x, y) dengan faktor (sx, sy)
void scaling(double matrix[2][3], double sx, double sy) {
    double scaling_matrix[2][2] = {{sx, 0},
                                   {0, sy}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            double sum = 0;
            for (int k = 0; k < 2; k++) {
                sum += matrix[i][k] * scaling_matrix[k][j];
            }
            matrix[i][j] = sum;
        }
    }
}

int main() {
    // Matriks awal dengan titik A(3,4) dan B(4,9)
    double matrix[2][3] = {{3, 4, 1},
                          {4, 9, 1}};    
    // Implementasi scaling dengan faktor 2 pada sumbu x dan 3 pada sumbu y
    scaling(matrix, 2, 3);

    // Titik A dan B setelah scaling
    double titik_A[2] = {matrix[0][0], matrix[0][1]};
    double titik_B[2] = {matrix[1][0], matrix[1][1]};

    std::cout << "Titik A setelah scaling: (" << titik_A[0] << ", " << titik_A[1] << ")" << std::endl;
    std::cout << "Titik B setelah scaling: (" << titik_B[0] << ", " << titik_B[1] << ")" << std::endl;

    return 0;
}