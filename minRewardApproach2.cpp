#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int b[n];
    int y=0;
    fill_n(b, n, 1);
    for(int i=1; i<n; i++)
    {
        if(a[i]>a[i-1])
            b[i]=b[i-1]+1;
    }
    for(int i=n-2; i>=0; i--)
    {
        if(a[i]>a[i+1])
            b[i]=max(b[i], b[i+1]+1);
    }
    for(int i=0; i<n; i++)
        cout<<b[i]<<" ";
    return 0;
}
