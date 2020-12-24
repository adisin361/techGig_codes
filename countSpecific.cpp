#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]%3==0 || a[i]%5==0)
            c++;
    }
    cout<<c<<endl;
    return 0;

}