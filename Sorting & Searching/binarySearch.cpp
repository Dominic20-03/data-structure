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

    int beg = 1, end = n, item;
    int mid = (beg + end) / 2;
    int loc = 0;

    cin >> item;

    while (beg <= end)
    {
        if (item < arr[mid])
        {
            end = mid - 1;
        }
        else if (item == arr[mid])
        {
            loc = mid;
            break;
        }
        else
        {
            beg = mid + 1;
        }

        mid = (beg + end) / 2;
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