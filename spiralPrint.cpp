#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int **a=new int*[n];
    for(int i=0; i<n; i++)
        a[i]=new int[m];
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
            cin>>a[i][k];
    }
    int startRow=0;
    int startCol=0;
    int endRow=n-1;
    int endCol=m-1;
    int result[1000];
    int j=0;
    while(startRow<=endRow && startCol<=endCol)
    {
        for(int col=startCol;col<=endCol;col++)
            result[j++]=a[startRow][col];
        for(int row=startRow+1;row<=endRow;row++)
            result[j++]=a[row][endCol];
        for(int col=endCol-1;col>=startCol;col--)
        {
            if(startRow==endRow)
                break;
            result[j++]=a[endRow][col];
        }
        for(int row=endRow-1;row>startRow;row--)
        {
            if(startCol==endCol)
                break;
            result[j++]=a[row][startCol];
        }
        startRow++;
        startCol++;
        endRow--;
        endCol--;
    }
    for(int j=0;j<(n*m);j++)
        cout<<result[j]<<" ";
    return 0;
}