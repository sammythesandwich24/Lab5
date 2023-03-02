#include <iostream>
#include <string>

using namespace std;

string encode(string text, string cipher) {
    string encoded = "";
    for (char c : text) {
        if (c >= 'A' && c <= 'Z') {
            encoded += cipher[c - 'A'];
        }
        else if (c >= 'a' && c <= 'z') {
            char upperCaseLetter = c - 32;
            char upperCaseCode = cipher[upperCaseLetter - 'A'];
            encoded += (upperCaseCode + 32);
        }
        else {
            encoded += c;
        }
    }
    return encoded;
}

int main() {
    string cipher = "VFXBLITZJRPDHKNOWSGUYQMACE";
    string text;
    cout << "Input text to cipher: ";
    getline(cin, text);

    string encoded = encode(text, cipher);

    cout << "Encoded message: " << encoded << endl;
    return 0;
}
