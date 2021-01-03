#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int empty_counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b)
            continue;
        sum += a[i];
        if (sum > d)
        {
            empty_counter++;
            sum = 0;
        }
    }
    cout << empty_counter << endl;
    return 0;
}