#include <iostream>
using namespace std;


int main()
{
    double a,b; cin >> a >>b;
    double x;
    if (a == 0 && b==0){
        cout << "ℝ";
    }else if (a == 0){
    cout << "Ø";
    }else{
        x= (-1*b)/a;
        if (x == 0) {x = 0;}
        cout << "{" << x << "}";
    }




    return 0;
}