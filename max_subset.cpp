#include<bits/stdc++.h>
using namespace std;
int max_subset(int arr[], int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];
    int maxSums[n];
    for(int i=0; i<n; i++)
        maxSums[i]=arr[i];
    maxSums[1]=max(arr[0], arr[1]);
    for(int i=2; i<n; i++)
        maxSums[i]=max(maxSums[i-1], maxSums[i-2]+arr[i]);
    return maxSums[n-1];  
}
int main()
{
    int arr[]={1, 2, 3};
    cout<<max_subset(arr, 3);
    return 0;
}