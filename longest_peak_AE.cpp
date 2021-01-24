#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int longestPeakLength = 0;
    int currentPeakLength;
    int i = 1;
    while(i < n-1)
    {
        bool isPeak = (a[i] > a[i-1] && a[i] > a[i+1]);
        if(!isPeak)
        {
            i++;
            continue;
        }
        int rightIdx = i+2;
        int leftIdx = i-2;
        while(leftIdx >=0 && a[leftIdx] < a[leftIdx+1])
            leftIdx--;
        while(rightIdx<n && a[rightIdx] < a[rightIdx-1])
            rightIdx++;
        currentPeakLength = rightIdx - leftIdx - 1;
        longestPeakLength = max(currentPeakLength, longestPeakLength);
        i=rightIdx;
    }
    cout<<longestPeakLength<<endl;
    return 0;
}