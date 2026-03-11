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

    int item, k = 1, loc = 0;
    cin >> item;

    while (loc == 0 && k <= n)
    {
        if (item == arr[k])
        {
            loc = k;
        }
        k = k + 1;
    }

    if (loc == 0)
    {
        cout << "ITEM is not in the array DATA\n";
    }
    else
    {
        cout << loc << " is the location of ITEM -> " << item << "\n";
    }

    return 0;
}