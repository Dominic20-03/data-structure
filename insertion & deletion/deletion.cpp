#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int position;
    cout << "Enter the Position : ";
    cin >> position;

    for (int i = position; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }

    n = n - 1;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}