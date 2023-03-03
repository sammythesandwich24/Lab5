#include <iostream>
#include <string>

using namespace std;

int main() {
    string cipher = "VFXBLITZJRPHDKNOWSGUYQMACE";
    string input;
    cout << "Enter a string to encode: ";
    getline(cin, input);

    // Encode the input string using the cipher
    string encoded = "";
    for (char c : input) {
        if (isalpha(c)) {
            char encoded_c = cipher[toupper(c) - 'A'];
            encoded += (isupper(c) ? encoded_c : tolower(encoded_c));
        }
        else {
            encoded += c;
        }
    }

    cout << "Encoded string: " << encoded << endl;
    return 0;
}