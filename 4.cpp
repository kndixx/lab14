#include <iostream>
using namespace std;

int main() {
    double p;
    
    cin >> p;
    
    int k;
    
    double sum = 1000;
    while (sum <= 1100) {
        sum *= 1 + p * 0.01;
        k++;
    }
    
    cout << sum << " " << k;
    return 0;
}
