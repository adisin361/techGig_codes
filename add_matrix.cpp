#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    }
    int p, q;
    cin >> p >> q;
    int b[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
            cin >> b[i][j];
    }
    int y[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            y[i][j] = a[i][j] + b[i][j];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << y[i][j] <<" ";
        cout << endl;
    }
    return 0;
}