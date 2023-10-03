#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, r;
    cin >> s >> r;
    int i;
    for (i = 0; i < s.length(); i++) {
        if (s[i] != r[i]) {
            cout << s[i];
            break;
        }
    }

    if (i == s.length()) {
        cout << "NA";
    }

    return 0;
}
