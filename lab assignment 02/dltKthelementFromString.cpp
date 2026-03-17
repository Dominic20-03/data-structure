#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text, s;
    cout << "Enter String text : ";
    cin >> text;
    cout << "Enter String S : ";
    cin >> s;

    cout << "Enter the Kth Position : ";
    int k;
    cin >> k;

    string ans = "";

    for (int i = 0; i < k - 1; i++)
    {
        ans += text[i];
    }

    int L = s.size();

    for (int i = k - 1 + L; i < text.size(); i++)
    {
        ans += text[i];
    }

    cout << ans << endl;

    return 0;
}