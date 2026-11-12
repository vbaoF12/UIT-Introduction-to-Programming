#include <iostream>

using namespace std;

int f(int n){
    if ( n== 1 || n == 2) return 1;
    return f(n-1) + f(n-2);
}

int main(){
    int n; 
    cin >> n;
    if (n > 30 || n < 1){
        cout << "So " << n << " khong nam trong khoang [1,30].";  
     }else {
        cout << f(n) << endl;
     }
        
return 0;
}