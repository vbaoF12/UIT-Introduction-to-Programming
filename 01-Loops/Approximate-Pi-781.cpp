#include <iostream>
#include <cmath>
using namespace std;

long long giaithua(int n){
     if (n == 0 || n == 1) return 1;
    return n*giaithua(n-1);
}

int main(){
    long double c = 0;
    long double tam;
    int n; cin >> n;
    for (int i = 0; i <= n; i++){
        tam = (2*i) + 1;
        c += pow(-1,i)/tam;
    }

    cout  << 4*c;
        
}