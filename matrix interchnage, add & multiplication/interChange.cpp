#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int matrix[row][col];
    int Tmatrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            Tmatrix[i][j] = matrix[j][i];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << Tmatrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}