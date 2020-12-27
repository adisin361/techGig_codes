#include<iostream>
#include<vector>
using namespace std;
void lastOccur(int a[], int n){
    vector<bool>repeat(n,false);
    int last=0;
    for(int i=0; i<n; i++){
        if(repeat[i]==true)
            continue;
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                repeat[j]==true;
                count++;
            }
        }
        if(count>1)
            last=a[i];
    }
    cout<<last<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n;i++)
        cin>>a[i];
    lastOccur(a,n);
    return 0;
}
    