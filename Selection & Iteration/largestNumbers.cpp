#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> data(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> data[i];
    }

    int location = 1;
    int largest_num = data[1];

    int k = 1;

    while (k <= n)
    {
        if (data[k] > largest_num)
        {
            location = k;
            largest_num = data[k];
        }

        k = k + 1;
    }

    cout << "Largest Number : " << largest_num << endl;
    cout << "Location of largest number : " << location << endl;

    return 0;
}