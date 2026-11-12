#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int s = 0;
    int a, x;
    x =n;
    
    while( n > 0){
        a = n%10;
        s = s*10 + a;
        n /= 10;
    }
    if ( s == x){
        cout << "true";
    }else {
        cout << "false";
    }
}