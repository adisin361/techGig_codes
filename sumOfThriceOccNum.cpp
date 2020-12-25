#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<bool> visited(n, false);
    int count = 0;
    bool flag = false;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                visited[j] = true;
            }
        }
        if (count == 3)
            sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}

