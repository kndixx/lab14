#include <iostream>
using namespace std;

int main() {
    int f;
    cin >> f;
    
    int f1 = 1;
    int f2 = 1;
    int k = 1;
    
    while (f2 != f) {
        int new_f = f2 + f1;
        f1 = f2;
        f2 = new_f;
        k++;
    }
    
    cout << k;
    
    return 0;
}
