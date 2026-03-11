#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "A can't be zero\n";
        return 0;
    }

    double d = (double)b * b - (4.00 * a * c);

    if (d > 0)
    {
        double x1 = (-b + sqrt(d)) / (2.00 * a);
        double x2 = (-b - sqrt(d)) / (2.00 * a);
        cout << "X1 : " << x1 << endl;
        cout << "X2 : " << x2 << endl;
    }
    else if (d == 0)
    {
        double x = -b / (2.00 * a);
        cout << "X : " << x << endl;
    }
    else
    {
        cout << "No Real Solutions\n";
    }
    return 0;
}