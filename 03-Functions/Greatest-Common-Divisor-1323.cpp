#include <iostream>
using namespace std;

int ucln(int a, int b){
    while (b != 0){
        int du = a % b;
        a = b;
        b = du;
        }
    return a;  
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << ucln(a, b);
    return 0;
}