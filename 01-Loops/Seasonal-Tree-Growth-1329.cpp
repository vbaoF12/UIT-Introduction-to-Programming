#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    double h;
    int t1, n1, t2, n2;
    bool nhandoi = false;
    bool cong1 = false;
    cin >> h >> t1 >> n1 >> t2 >> n2;
    while(true){
        if (t1 >= 5 && t1 <= 11 && nhandoi == false){
            h *= 2;
            nhandoi = true;
            cong1 = false;
        }else if ( (t1<= 4 || t1 == 12) && cong1 == false){
            h += 1;
            cong1 = true;
            nhandoi = false;
        }
    
        if (h > 200){h /= 3;}

        if (t1 == t2 && n1 == n2){break;}
        t1++;
        if (t1 >12){
            t1 = 1;
            n1 +=1;
        }
    }
    cout << fixed << setprecision(2) << h;
    return 0;
}