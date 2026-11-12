#include <iostream>
#include <cmath>
using namespace std;

long long giaithua(int n){
     if (n == 0 || n == 1) return 1;
    return n*giaithua(n-1);
}

int main(){
    long double a = 0;
    long double b = 0;
    long double c = 0;
    long double tam;
    int n,x; cin >> n >> x;
    for (int i = 0; i <= n; i++){
        a += pow(x,i);
        b += pow(x,2*i);
        tam = giaithua(i);
        c += pow(x,i)/tam;
    }

    cout << a << "\n" << b << "\n" << c;
        
}