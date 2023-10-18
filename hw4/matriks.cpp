#include <iostream>

using namespace std;

void pertambahan(int matrix1[2][2], int matrix2[2][2])
{
    int hasil[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

void perkurangan(int matrix1[2][2], int matrix2[2][2])
{
    int hasil[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

void perkalianInput(int matrix1[2][2])
{
    int input[2][2];
    int hasil[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cin >> input[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                hasil[i][j] += matrix1[i][k] * input[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

void perkalian(int matrix1[2][2], int matrix2[2][2])
{
    int hasil[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                hasil[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Hasil[" << i << "][" << j << "]"
                 << " = " << hasil[i][j] << " \n";
        }
    }
}

int main()
{
    int matrix1[2][2] = {{1, 3}, {2, 4}};
    int matrix2[2][2] = {{1, 1}, {0, 0}};
    int pilihan;

    do
    {
        cout << "1. Pertambahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian dengan input\n";
        cout << "4. Perkalian\n";
        cout << "5. Exit\n";
        cout << "Masukkan Pilihan : ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            pertambahan(matrix1, matrix2);
        }

        else if (pilihan == 2)
        {
            perkurangan(matrix1, matrix2);
        }

        else if (pilihan == 3)
        {
            perkalianInput(matrix1);
        }

        else if (pilihan == 4)
        {
            perkalian(matrix1, matrix2);
        }

        else if (pilihan == 5)
        {
        }

        else
        {
            cout << "Pilihan tidak tersedia\n";
        }

    } while (pilihan != 5);

    return 0;
}
