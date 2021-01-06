#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int num;
    cin>>num;
    int right=n-1;
    int left=0;
    while(left<right)
    {
        while(left<right && a[right]==num)
            right--;
        if(a[left]==num)
            swap(a[left], a[right]);
        left++;
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
