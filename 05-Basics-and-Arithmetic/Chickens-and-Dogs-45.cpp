#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int con,chan;
    cin >> con >> chan;
    int cho = (chan-2*con)/2;
    int ga = con - cho;
    cout << ga << " " << cho;
}