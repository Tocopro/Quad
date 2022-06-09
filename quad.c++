#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Quad
{
public:
    double a, b, c, root1, root2;

    void quad_roots()
    {

        cout << "Enter root for 'a': ";
        cin >> a;
        cout << "Enter root for 'b': ";
        cin >> b;
        cout << "Enter root for 'c': ";
        cin >> c;

    }

    void calculation()
    {

        root1 = ((-b) + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
        root2 = ((-b) - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
        cout << "First Root is " <<  setprecision(2) << root1  << endl;
        cout << "Second Root is " <<  setprecision(2) << root2 << endl;
    }


};

int main() {

    Quad object;
    object.quad_roots();
    object.calculation();

    return 0;
}


