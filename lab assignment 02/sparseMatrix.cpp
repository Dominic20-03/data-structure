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

    int zerocnt = 0;
    int nonzerocnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                zerocnt++;
            }
            else
            {
                nonzerocnt++;
            }
        }
    }

    if (zerocnt > nonzerocnt)
    {
        cout << "Sparse Matrix\n";
    }
    else
    {
        cout << "Not Sparse Matrix\n";
    }

    return 0;
}