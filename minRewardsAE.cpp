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
    fill_n(b, n, 1);
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        if(a[j]<a[i])
            b[i]=b[j]+1;
        else
        {
            while(j>=0 && a[j]>a[j+1])
            {
                b[j]=max(b[j], b[j+1]+1);
                j--;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<b[i]<<" ";
    return 0;
}