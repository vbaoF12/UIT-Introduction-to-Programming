#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    bool check = 0;
    if (n == 1) cout << "-1";
    else
    {
        for (int i = 2; i < n; i ++){
            if ( n % i == 0) 
            {
                check = 1;
                cout << "0";
                break;
            }
            
            }
        if (check == 0) cout << "1";
    } 
    return 0;
}