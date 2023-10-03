#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int sumPrime(int rangeLeft, int rangeRight) {
    int minPrime = -1;
    int maxPrime = -1;
    
    for (int i = rangeLeft; i <= rangeRight; ++i) {
        if (isPrime(i)) {
            if (minPrime == -1) {
                minPrime = i;
            }
            maxPrime = i;
        }
    }
    
    if (minPrime == -1) {
        return 0;
    }
    
    return minPrime + maxPrime;
}

int main() {
    int rangeLeft, rangeRight;
    cin >> rangeLeft >> rangeRight;
    
    int result = sumPrime(rangeLeft, rangeRight);
    cout << result << endl;
    
    return 0;
}
