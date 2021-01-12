#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int>mp;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        mp[a[i]]++;
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}