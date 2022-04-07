#include <iostream>
using namespace std;

void encrypt(string plain, int shift) {
    string cipher = "";
    int i;

    for (i = 0; i < plain.length(); i++) {
        // cout << "is here";
        if (isspace(plain[i])) {
            cipher[i] = plain[i];
        } else {
            if (isupper(plain[i])) {
                cipher[i] += char(int(plain[i] + shift - 65) % 26 + 65);
            } else {
                cipher[i] += char(int(plain[i] + shift - 97) % 26 + 97);
            }
        }
        cout << cipher[i];
    }
}

void decrypt(string cipher, int shift) {
    string plain = "";
    int i;

    for (i = 0; i < cipher.length(); i++) {
        if (isspace(cipher[i])) {
            plain[i] = cipher[i];
        } else {
            if (isupper(cipher[i])) {
                plain[i] += char(int(cipher[i] - shift - 65) % 26 + 65);
            } else {
                plain[i] += char(int(cipher[i] - shift - 97) % 26 + 97);
            }
        }
        cout << plain[i];
    }
}

int main() {
    int choice, shift;
    string text;
    cout << "Encrypt (1) or Decrypt (2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter your text: ";
        cin >> text;
        cout << "Enter your shift: ";
        cin >> shift;
        cout << "Plaintext: " << text;
        cout << "\nCiphertext: ";
        encrypt(text, shift);
    } else {
        cout << "Enter your text: ";
        cin >> text;
        cout << "Enter your shift: ";
        cin >> shift;
        cout << "Ciphertext: " << text;
        cout << "\nPlaintext: ";
        decrypt(text, shift);
    }

    return 0;
}

