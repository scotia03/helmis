#include <iostream>
#include <cmath>

// Fungsi untuk melakukan rotasi pada titik (x, y) dengan sudut (theta) dalam derajat
void rotasi(double matrix[2][3], double theta) {
    double theta_rad = M_PI * theta / 180.0;
    double rotation_matrix[2][2] = {{cos(theta_rad), -sin(theta_rad)},
                                    {sin(theta_rad), cos(theta_rad)}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            double sum = 0;
            for (int k = 0; k < 2; k++) {
                sum += matrix[i][k] * rotation_matrix[k][j];
            }      
        }
    }
}

int main() {
    // Matriks awal dengan titik A(3,4) dan B(4,9)
    double matrix[2][3] = {{3, 4, 1},
                          {4, 9, 1}};

    // Implementasi rotasi dengan sudut 45 derajat
    rotasi(matrix, 45);

    // Titik A dan B setelah rotasi
    double titik_A[2] = {matrix[0][0], matrix[0][1]};
    double titik_B[2] = {matrix[1][0], matrix[1][1]};
    std::cout << "Titik A setelah rotasi: (" << titik_A[0] << ", " << titik_A[1] << ")" << std::endl;    
    std::cout << "Titik B setelah rotasi: (" << titik_B[0] << ", " << titik_B[1] << ")" << std::endl;    
    return 0;
}