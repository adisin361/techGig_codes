#include <iostream> 
using namespace std;
int ncr(int n, int r)
{
    int nf = 1;
    int rf = 1;
    int nmrf = 1;
    for (int i = 2; i <= n; i++)
        nf *= i;

    for (int i = 2; i <= r; i++)
        rf *= i;

    int nmr = n - r;
    for (int i = 1; i <= nmr; i++)
        nmrf *= i;

    return (nf / (rf * nmrf));
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout<< ncr(i-1, j-1);
        cout << "\n";
    }
}