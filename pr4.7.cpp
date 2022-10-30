#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    double xp, xk, x, dx, eps, Arth, sh, ch, a = 0, R = 0, S = 0;
    int n = 0;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << fixed;


    x = xp;
    if (abs(xk) < 1 && abs(xp) < 1) {
        cout << "-----------------------------------------" << endl;
        cout << "|" << setw(5) << "x" << "   |"
            << setw(10) << "Arth x " << " |"
            << setw(7) << "S" << "    |"
            << setw(5) << "n" << " |"
            << endl;
        cout << "-----------------------------------------" << endl;
        while (x <= xk)
        {
            n = 0;
            a = x;
            S = a;
            do {
                n++;
                R = (2 * n * x * x - x * x) / (2 * n + 1);
                a *= R;
                S += a;
            } while (abs(a) >= eps);
            Arth = (1.0 / 2 * log((1 + x) / (1 - x)));
            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << setw(10) << setprecision(5) << Arth << " |"
                << setw(10) << setprecision(5) << S << " |"
                << setw(5) << n << " |"
                << endl;
            x += dx;

        }
        cout << "-----------------------------------------" << endl;
    }
    else
        cout << "x >= 1!";


    return 0;
}
