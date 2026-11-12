#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a;
    cin >> a;
    cout << fixed << setprecision(2)<< "Chu vi: " << 4*a << '\n' << "Dien tich: " << a*a;
}