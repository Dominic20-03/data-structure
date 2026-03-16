#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin >> text;

    string s;
    cin >> s;

    int k;
    cin >> k;

    for (int i = 0; i < k - 1; i++)
    {
        cout << text[i];
    }

    cout << s;

    for (int i = k - 1; text[i] != '\0'; i++)
    {
        cout << text[i];
    }

    cout << endl;

    return 0;
}