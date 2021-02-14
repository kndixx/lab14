#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cin >> a >> b;
    
    while (a - b >= 0) {
        a -= b;
    }
    
    cout << a;
    
    return 0;
}
