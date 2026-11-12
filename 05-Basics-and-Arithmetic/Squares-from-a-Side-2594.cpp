#include <iostream>

    using namespace std;

    int main() {
        long long ax, ay;
        long long bx, by;
        cin >> ax >> ay;
        cin >> bx >> by;
        long long x = -1*(by - ay);
        long long y = bx - ax;
        long long cx, cy;
        cx = x + ax;
        cy = y + ay;

        long long dx, dy;
        dx = x + bx;
        dy = y + by;

        long long x1 = (by - ay);
        long long y1 = -1*(bx - ax);
        long long ex, ey;
        ex = x1 + ax;
        ey = y1 + ay;

        long long fx, fy;
        fx = x1 + bx;
        fy = y1 + by;

        cout << "(" << ax << ", " << ay << ") " << "(" << cx << ", " << cy << ") " << "(" << dx << ", " << dy << ") " << "(" << bx << ", " << by << ")"<< endl;
        cout << "(" << ax << ", " << ay << ") " << "(" << bx << ", " << by << ") " << "(" << fx << ", " << fy << ") " << "(" << ex << ", " << ey << ")";


    }