#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int result[n];
    int k=0;
    for(int i=0; i<n; i++)
    {
        int prd=1;
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            prd*=a[j];
        }
        result[k++]=prd;
    }
    for(int k=0; k<n; k++)
        cout<<result[k]<<" ";
    return 0;
}