#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int s = 0;
    int a;
    while( n > 0){
        a = n%10;
        s += a;
        n /= 10;
    }

    cout  << s;
        
}