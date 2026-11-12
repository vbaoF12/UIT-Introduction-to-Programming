#include <iostream>
using namespace std;

bool checkprime(int n){
    if (n < 2) return false;

    for (int j=2; j*j <= n; j++){
        if (n%j == 0){
          return false;
        }
    }
    
    return true;
}

int main(){
    int n; cin >> n;
    int dem = 0;
    for (int i=2; i+2 < n; i++){
        if(checkprime(i) == true && checkprime(i + 2)== true){
            cout << i << ", " << i + 2 << "\n";
            dem += 1;
        }
    }
    cout <<"Tong: " << dem <<  " cap so sinh doi < " << n;
    return 0;
}