#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        // Check if the square root of the bill amount is an integer
        double sqrtBill = sqrt(arr[i]);
        if (sqrtBill == int(sqrtBill)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
