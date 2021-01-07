#include<bits/stdc++.h>
using namespace std;
bool isMonotonic(int array[], int n)
{
    bool non_decreasing=true;
    bool non_increasing=true;
    for(int i=0; i<n; i++)
    {
        if(array[i]<array[i+1])
            non_increasing=false;
        if(array[i]>array[i+1])
            non_decreasing=false;
    }
    return (non_increasing || non_decreasing);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<isMonotonic(a,n)<<endl;
    return 0;
}
