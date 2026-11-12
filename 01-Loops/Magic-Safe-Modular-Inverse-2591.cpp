#include <iostream>

using namespace std;

int main(){
    long long y = 0, p, a;
    if (!(cin >> a >> p)) return 0;

    for (long long i = 1; ; ++i) {
        y += a;
        if (y >= p) y -= p;

        if (y == 1) {
            cout << i;
            return 0;
        }
    }
    return 0;
}