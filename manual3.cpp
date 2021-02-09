#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    complex()
    {
        r = 0;
        i = 0;
    }
    complex(int a, int b)
    {
        r = a;
        i = b;
    }
    void display()
    {
        cout << "real part: " << r << endl
             << "imaginary part: " << i << endl;
    }
    complex operator++()
    {
        r = ++r;
        i = ++i;
    }
    complex operator++(int)
    {
        r = r++;
        i = i++;
    }
    complex operator+(complex D)
    {
        complex P;
        P.r = r + D.r;
        P.i = i + D.i;

        return P;
    }
};
int main()
{
    complex n(20, -6);
    n.display();
    ++n;
    cout << "prefix:" << endl;
    n.display();
    n++;
    cout << "postfix:" << endl;
    n.display(); 

    //addition of two objects:
    complex A(50, -23), B(-5, 7), N;
    A.display();
    B.display();
    N = A + B;
    cout << "addition of two objects :" << endl;
    N.display();

    return 0;
}