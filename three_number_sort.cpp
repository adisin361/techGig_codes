#include<bits/stdc++.h>
using namespace std;
void threenumbersort(int array[], int n, int order[3])
{
    int x=0;
    vector<int>ans;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(array[j]==order[x])
                ans.push_back(array[j]);
        }
        x++;
        if(x>2)
            break;
    }
    for(int el: ans)
        cout<<el<<endl;
}

int main()
{
    int array[]={9,9,9,7,9,7,9,9,7,9};
    int order[]={11,7,9};
    threenumbersort(array, 10, order);
    return 0;
}