#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if (a>b){
        cout << "max = " << a << '\n' << "min = " << b;
    } else {
    cout << "max = " << b << '\n' << "min = " << a;}
}