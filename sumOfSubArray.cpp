#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Sum of all Sub Arrays: " << endl;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n; j++)
        {
            s+=a[j];
            cout << s << endl;
        }
    }
    return 0;
}