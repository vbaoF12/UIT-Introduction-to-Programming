#include <iostream>
using namespace std;

int main() 
{
    int a, b, n;
    int v = 0;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++){
        v += (a*b);
        a = a + 1;
        b = b + 1;
    }

    cout << v;
    return 0;
}