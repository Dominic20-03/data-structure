#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));

    ofstream outfile("RAND.DAT");

    for (int i = 1; i <= 100; i++)
    {
        int randomData = rand() % 100;
        outfile << randomData << endl;
    }

    outfile.close();

    ifstream infile("RAND.DAT");
    int n;
    int cnt = 1;

    while (infile >> n)
    {
        cout << cnt << " : " << n << endl;
        cnt++;
    }

    infile.close();

    return 0;
}