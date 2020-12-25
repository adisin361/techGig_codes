#include <bits/stdc++.h>
using namespace std;
int majorityNum(int a[], int n)
{
    vector<bool> visited(n, false);
    int count, flag;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        flag = 0;
        if (visited[i] == true)
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                visited[j] = true;
            }
        }
        if (count > (n / 2))
            return a[i];
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << majorityNum(a, n);
    return 0;
}
