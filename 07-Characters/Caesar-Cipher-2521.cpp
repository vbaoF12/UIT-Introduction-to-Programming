#include <iostream>

using namespace std;

int main(){
    char x;
    int n;
    cin >> x >> n;
    int y = x + n;
    if (y-65 >= 26){
        int a = 65 + (y-65)%26;
        char q = (char)a;
        cout << q;
    }else{
        char q = (char)y;
        cout << q;
    }
    return 0;
}