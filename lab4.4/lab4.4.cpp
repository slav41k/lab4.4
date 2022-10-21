#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    double x;
    double xp;
    double xk;
    double dx;
    double R;
    double y;
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "---------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |" << setw(6) << "y" << "    |" << endl;
    cout << "---------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= -6 - R) {
            y = 0;
        }
        else if (-6 - R < x && x <= -6) {
            y = -sqrt(R * R - (x + 6) * (x + 6));
        }
        else if (-6 < x && x <= -R) {
            y = (R * (R + x)) / (-R + 6);
        }
        else if (-R < x && x <= 0) {
            y = sqrt(R * R - x * x);
        }
        else if (0 < x && x <= 3) {
            y = (3 * R - R * x) / 3.;
        }
        else {
            y = (R * x - 3 * R) / 6.;
        }
        cout << "|" << setw(5) << setprecision(2) << x << "   |" << setw(7) << setprecision(2) << y << "   |" << endl;
        cout << "---------------------" << endl;
        x += dx;
    }
    return 0;
}