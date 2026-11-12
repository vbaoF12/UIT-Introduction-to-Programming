#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long double a = 0;
    long double b = 0;
    long double c = 0;
    long double tamb = 1;
    long double tamc = 0;
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        a += pow(i,i);
        tamb = tamb*i;
        b += tamb;
        tamc += i;
        c += 1/tamc;
    }

    cout << a << "\n" << b << "\n" << c;
        
}