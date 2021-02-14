#include <iostream>
using namespace std;

int main() {
    int n;
    int k = 1;
    
    cin >> n;
    
    int sum = 1;
    while (sum < n) {
        k++;
        sum += k;
    }
    
    cout << k << " " << sum;
    
    return 0;
}
