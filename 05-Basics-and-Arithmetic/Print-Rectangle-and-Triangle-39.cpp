#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    // --- HÌNH CHỮ NHẬT (4 dòng, 6 cột) ---
    // Dòng 1: 6 số x cách nhau 1 khoảng trắng (tổng bề ngang 11 ký tự)
    cout << x << " " << x << " " << x << " " << x << " " << x << " " << x << "\n";
    cout << x << "         " << x << "\n";
    cout << x << "         " << x << "\n";
    cout << x << " " << x << " " << x << " " << x << " " << x << " " << x << "\n";
    cout << "     " << x << "\n";
    
    cout << "    " << x << " " << x << "\n";
   
    cout << "   " << x << "   " << x << "\n";
    
    cout << "  " << x << "     " << x << "\n";
    
    cout << " " << x << "       " << x << "\n";
    
    cout << x << " " << x << " " << x << " " << x << " " << x << " " << x << "\n";

    return 0;
}