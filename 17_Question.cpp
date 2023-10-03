#include <bits/stdc++.h>
using namespace std;
int main() {
    string textInput;
    getline(cin, textInput);

    int count = 0;
    for (int i = 0; i < textInput.size(); i++) {
        // Check if the current character is not an English letter, number, or whitespace
        if (!(textInput[i] >= 'A' && textInput[i] <= 'Z' ||
              textInput[i] >= 'a' && textInput[i] <= 'z' ||
              textInput[i]>='0' && textInput[i]<='9' ||
              textInput[i] == ' ')) {
            count++;
        }
    }

    cout << count;
    return 0;
}
