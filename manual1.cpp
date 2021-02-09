#include <iostream>
using namespace std;
class number
{
    int f, i;

public:
    number()
    {
        f = 0;
        i = 0;
    }
    number(int a, int b)
    {
        f = a;
        i = b;
    }
    void display()
    {
        cout << "feet : " << f << endl
             << "inches: " << i << endl;
    }
    number operator-()
    {
        f = -f;
        i = -i;
    }

    number operator+(number D)
    {
        number P;
        P.f = f + D.f;
        P.i = i + D.i;

        return P;
    }
    number operator+()
    {
        number P;
        P.f = f + 10;
        P.i = i + 10;

        return P;
    }
};
int main()
{
    number m(-30, 54);
    m.display();
    -m;
    cout << "unary function :" << endl;
    m.display();
    number A(-6, -9), B(7, 2), N;
    A.display();
    B.display();
    N = A + B;
    cout << "adding two objects:" << endl;
    N.display();

    number n(10, -29), Z;
    Z = +n;
    cout << "ADDING AN INTERGER TO IT:" << endl;
    Z.display();

    return 0;
}