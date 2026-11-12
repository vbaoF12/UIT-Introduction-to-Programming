#include <iostream>

using namespace std;

int main(){
    float F;
    cin >> F;
    float C = (F-32)/1.8;
    float K = C + 273.15;
    cout << C << " " << K;
}