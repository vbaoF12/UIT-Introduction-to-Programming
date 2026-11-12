#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double r, p=M_PI, l;
     cin >> r;
     double g = double(120)/360;
     l = 6*r + 6*p*r*g;
     cout << fixed << setprecision(2) << l;
    return 0;
}