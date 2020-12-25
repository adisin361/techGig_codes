#include<iostream>
#include<climits>
using namespace std;
void largeDiff(int a[], int n){
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]>max)
            max=a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]<min)
            min=a[i];
    }
    cout<<(max-min)<<endl;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    largeDiff(a,n);
    return 0;
}