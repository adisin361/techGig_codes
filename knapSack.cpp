#include<iostream>
using namespace std;
int knapSack(int value[], int wt[], int n, int W){
    if(W==0 || n==0)
        return 0;
    if(W<wt[n-1])
        return knapSack(value, wt, n-1, W);
    return max(knapSack(value, wt, n-1, W-wt[n-1])+value[n-1], knapSack(value, wt, n-1, W));
}

int main(){
    int value[]={100,50,150};
    int wt[]={10,20,30};
    int W = 50;
    cout << knapSack(value, wt, 3, W);
    return 0;
}
