#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int limit = (1 << 5);
    int prime[limit + 1];

    for (int i = 0; i <= limit; i++)
    {
        prime[i] = 1;
    }

    prime[0] = 0;
    prime[1] = 0;

    for (int i = 2; i * i <= limit; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= limit; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    if (prime[n] == 1)
    {
        cout << n << " is a prime Number\n";
    }
    else
    {
        cout << n << " is not a prime Number\n";
    }

    return 0;
}