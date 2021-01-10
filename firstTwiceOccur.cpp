#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    bool c=false;
    int min=INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j]==a[i])
            {
                c=true;
                if(min>j)
                    min=j;
            }
        }
    }
    if(c==false)
        cout<<-1<<endl;
    else
        cout<<a[min]<<endl;
    return 0;
}