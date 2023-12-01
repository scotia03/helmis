#include <iostream>
using namespace std;

// Fungsi untuk melakukan refleksi terhadap sumbu x pada titik (x, y)
pair<int, int> reflectXAxis(int x, int y) {
    return make_pair(x, -y);
}

int main() {
    // Titik p1(1,3) dan p2(4,9)
    int p1_x = 1, p1_y = 3;
    int p2_x = 4, p2_y = 9;

    // Melakukan refleksi terhadap sumbu x pada p1 dan p2
    pair<int, int> p1_reflected = reflectXAxis(p1_x, p1_y);
    pair<int, int> p2_reflected = reflectXAxis(p2_x, p2_y);

    // Menampilkan hasil refleksi
    cout << "Hasil refleksi terhadap sumbu x:" << endl;
    cout << "Titik p1 setelah refleksi: (" << p1_reflected.first << ", " << p1_reflected.second << ")" << endl;
    cout << "Titik p2 setelah refleksi: (" << p2_reflected.first << ", " << p2_reflected.second << ")" << endl;

    // Untuk menampilkan grafik, Anda perlu menggunakan library grafis seperti OpenGL atau SDL

    return 0;
}
