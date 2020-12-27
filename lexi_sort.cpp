#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j].compare(a[i])>0)
            {
                string temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}