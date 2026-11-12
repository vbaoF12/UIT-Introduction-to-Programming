#include <iostream>
#include <cmath>
using namespace std;

int daonguoc(int a){
    int b = 0;
    while ( a != 0){
        int c = a%10;
        b = b*10 + c;
        a /= 10;
    }
    return b;
}

int main() 
{
    int k,x,y; cin >> k >> x >> y;
    int dem = 0;
    for (int i = x; i <= y; i++){
        if(abs(i - daonguoc(i)) % k == 0){dem++;}
    }

    cout << dem;
    
}