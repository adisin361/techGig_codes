#include<bits/stdc++.h>
using namespace std;
bool isOutOfBounds(int row, int col, int height, int width)
{
    return (row<0 || row>height || col<0 || col>width);
}

int main()
{
    int n, m;
    cin>>n>>m;
    int **a=new int*[n];
    for(int i=0; i<n; i++)
        a[i]=new int[m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m;j++)
            cin>>a[i][j];
    }
    bool goingDown=true;
    int height=n-1;
    int width=m-1;
    int row=0;
    int col=0;
    int result[n*m];
    int p=0;
    while(!isOutOfBounds(row, col, height, width))
    {
        result[p++]=a[row][col];
        if(goingDown)
        {
            if(col==0 || row==height)
            {
                goingDown=false;
                if(row==height)
                    col++;
                else
                    row++;
            }
            else
            {
                row++;
                col--;  
            }
        }
        else
        {
            if(row==0 || col==width)
            {
                goingDown=true;
                if(col==width)
                    row++;
                else
                    col++;
            }
            else
            {
                row--;
                col++;
            }
        } 
    }
    for(int p=0; p<n*m; p++)
        cout<<result[p]<<" ";
    return 0;
}