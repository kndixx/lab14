#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cin >> a >> b;
    
    for (int i = a; i <= b; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << i << " ";
        }
    }
    
    return 0;
}
