#include <iostream>
#include <cmath>

using namespace std;

void dda(int x1, int y1, int x2, int y2)
{
    // Menghitung nilai delta
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Menghitung jumlah step
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;

    // Posisi awal
    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++)
    {
        cout << "(" << round(x) << ", " << round(y) << ")\n";
        x += xInc;
        y += yInc;
    }
}

int main()
{
    int x1, y1, x2, y2;
    cout << "Masukkan koordinat 1 (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat 2 (x2, y2): ";
    cin >> x2 >> y2;

    dda(x1, y1, x2, y2);

    return 0;
}