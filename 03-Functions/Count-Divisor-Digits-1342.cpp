#include <iostream>
using namespace std;

bool checkchiahet(int a, int b){
    if (b == 0){return false;}
    if (a%b == 0){return true;}
    else{return false;}
}


int main() 
{
    int n, tam; cin >> n;
    int temp = n;
    int max = 0;
    while(temp != 0){
        tam = temp % 10;
        if (checkchiahet(n,tam) == true){max += 1;}
        temp /= 10;
    }
    cout << max;
    return 0;
}