#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cin >> a >> b;
    
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    while (a % b != 0) {
        a = a % b;
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    cout << b;
    
    return 0;
}
