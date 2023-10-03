#include<bits/stdc++.h>
using namespace std;

int main() {
    int itemId;
    cin >> itemId;
    string str = to_string(itemId);
    int maxAns = -1; // Initialize maxAns to -1 to handle the case of item ID with all 0s

    for (int i = 0; i < str.size(); i++) {
        int digit = str[i] - '0'; // Convert character to integer
        maxAns = max(maxAns, digit);
    }

    cout << maxAns << endl;
    
    return 0;
}
