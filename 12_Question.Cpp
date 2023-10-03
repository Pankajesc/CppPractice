#include <iostream>

using namespace std;

char charEncrypt(char character, int key) {
    if (character >= 'a' && character <= 'z') {
        int v = character;
        if (v + key > 'z') {
            key = 'z' - v;
            key = key % 26;
            char res = 'a' + key;
            return res;
        } else {
            return character + key;
        }
    } else if (character >= 'A' && character <= 'Z') {
        int v = character;
        if (v + key > 'Z') {
            key = 'Z' - v;
            key = key % 26;
            char res = 'A' + key;
            return res;
        } else {
            return character + key;
        }
    } else {
        return character;
    }
}

int main() {
    char character;
    int key;
    cin >> character >> key;

    char result = charEncrypt(character, key);

    cout << result << endl;

    return 0;
}
