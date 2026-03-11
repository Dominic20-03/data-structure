#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] >= 40)
        {
            count = count + 1;
        }
    }

    cout << "The Number of students passed : " << count << "\n";

    return 0;
}