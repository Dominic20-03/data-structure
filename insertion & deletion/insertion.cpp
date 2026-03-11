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

    int position, value;
    cout << "Enter the Position : ";
    cin >> position;
    cout << "Enter the value : ";
    cin >> value;

    for (int i = n; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = value;
    n = n + 1;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}