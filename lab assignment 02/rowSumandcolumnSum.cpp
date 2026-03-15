#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rowsum;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        rowsum = 0;
        for (int j = 0; j < m; j++)
        {
            rowsum += arr[i][j];
        }
        k++;
        cout << "Sum of row " << k << " is : " << rowsum << endl;
    }

    int l = 0;
    int colsum;

    for (int i = 0; i < m; i++)
    {
        colsum = 0;
        for (int j = 0; j < n; j++)
        {
            colsum += arr[j][i];
        }
        l++;
        cout << "Sum of Column " << l << " is : " << colsum << endl;
    }

    return 0;
}