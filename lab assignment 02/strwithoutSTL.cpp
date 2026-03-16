#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[101], s2[101], copy[101], concat[1001];
    cout << "Enter string s1 : ";
    cin >> s1;
    cout << "Enter string s2 : ";
    cin >> s2;
    int len = 0;

    // string length
    for (int i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }

    cout << "Length of String s1 : " << len << endl;

    // copying string
    for (int i = 0; s1[i] != '\0'; i++)
    {
        copy[i] = s1[i];
    }

    cout << "Copy of String s1 : " << copy << endl;

    // concatenation
    int c1 = 0;
    while (s1[c1] != '\0')
    {
        concat[c1] = s1[c1];
        c1++;
    }

    int c2 = 0;
    while (s2[c2] != '\0')
    {
        concat[c1] = s2[c2];
        c1++;
        c2++;
    }

    concat[c1] = '\0';

    cout << "Concatenation of both string s1 & s2 : " << concat << endl;

    // compare
    int cmpr = 0;
    while (s1[cmpr] == s2[cmpr] && s1[cmpr] != '\0' && s2[cmpr] != '\0')
    {
        cmpr++;
    }

    cout << "---String Comparison---\n";

    if (s1[cmpr] == s2[cmpr])
    {
        cout << "s1 and s2 are equal\n";
    }
    else if (s1[cmpr] > s2[cmpr])
    {
        cout << "s1 is bigger string\n";
    }
    else
    {
        cout << "s2 is bigger string\n";
    }

    // reverse
    cout << "String Reverse of s1 : ";
    for (int i = len - 1; i >= 0; i--)
    {
        cout << s1[i];
    }
    cout << endl;

    return 0;
}