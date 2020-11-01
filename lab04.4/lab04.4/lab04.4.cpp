#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, y, R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= -8 - R)
            y = R;
        else
            if (-8 - R < x && x <= -8 + R)
                y = -R + sqrt((R * R) + 8 * (x * x));
            else
                if (-8 + R < x && x <= 2)
                    y = (-R + (2 + R / 2 + 8 + R)) * (x + 8 - R);
                else
                    if (2 < x && x <= 6)
                        y = R;
                    else
                        y = (x - 6) * (x - 6);

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    return 0;
}