#include <iostream>
using namespace std;
void tenMultiple(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 10 == 0)
        {
            for (int j = i; j < n; j++)
                a[j] = a[j + 1];
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    tenMultiple(a, n);
    return 0;
}