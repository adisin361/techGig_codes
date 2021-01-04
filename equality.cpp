#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max=INT_MIN;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=max; j++){
            if(a[i]+j==max){
                sum+=j;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
} 