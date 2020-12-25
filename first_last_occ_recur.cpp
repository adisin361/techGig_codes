#include <iostream>
using namespace std;
int first(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (arr[i] == key)
        return i;
    return first(arr, n, i + 1, key);
}

int last(int arr[], int n, int i, int key)
{
    if(i==n)
        return -1;
    int restArray = last(arr, n, i+1, key);
    if(restArray!=-1)
        return restArray;
    if(arr[i] == key)
        return i;
    return -1;
}
int main()
{
    int arr[] = {5, 1, 7, 3, 7};
    cout << first(arr, 5, 0, 7) << endl;
    cout << last(arr, 5, 0, 7);
    return 0;
}