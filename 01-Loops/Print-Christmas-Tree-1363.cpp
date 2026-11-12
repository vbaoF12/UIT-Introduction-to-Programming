#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 2){
        cout << string((n - i)/2, ' ') << string(i , '#') << string((n - i )/2, ' ') << '\n';
    }
    for (int k = 0; k < (n/5); k++){
        cout << string((n - 3)/2, ' ') << string(3 , '#') << string((n - 3 )/2, ' ') << '\n';
    }
    return 0;
}