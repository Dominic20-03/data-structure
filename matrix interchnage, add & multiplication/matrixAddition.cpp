#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int matrix1[row][col];
    int matrix2[row][col];
    int matrix3[row][col];

    cout << "\nEnter the element of matrix 01: \n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter the element of matrix 02: \n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nAfter Addition of Matrix 1 & Matrix 2 : \n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix3[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}