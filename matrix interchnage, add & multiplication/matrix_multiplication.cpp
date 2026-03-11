#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    cin >> row1 >> col1;
    cin >> row2 >> col2;
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int matrix3[row1][col2] = {0};

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrix3[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}