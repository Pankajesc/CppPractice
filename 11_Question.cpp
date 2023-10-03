#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    int sales[100][100]; // Assuming maximum possible dimensions
    // Input the sales revenue for each product each day
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> sales[i][j];
        }
    }

    // Find and print the maximum revenue for each day
    for (int i = 0; i < M; ++i) {
        int maxRevenue = sales[i][0]; // Initialize maxRevenue with the first product's revenue
        for (int j = 1; j < N; ++j) {
            if (sales[i][j] > maxRevenue) {
                maxRevenue = sales[i][j];
            }
        }
        cout << maxRevenue << " ";
    }

    cout << endl;

    return 0;
}
