#include <iostream>
using namespace std;

int main() {
    string str = "how Many Words";
    int vowels = 0, consonant = 0, space = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if (ch == ' ') {
            space++;
        }
        else {
            consonant++;
        }
    }

    cout << "vowels " << vowels << endl;
    cout << "consonant " << consonant << endl;
    cout << "words " << space + 1 << endl;

    return 0;
}
