#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int data[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> data[i];
    }

    for (int i = 1; i < n; i++)
    {
        int ptr = 1;
        while (ptr <= (n - i))
        {
            if (data[ptr] > data[ptr + 1])
            {
                int temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
            }
            ptr = ptr + 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }

    cout << "\n";

    return 0;
}