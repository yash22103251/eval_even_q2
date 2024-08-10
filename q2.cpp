#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void frequencies(const string& str) {
    unordered_map<char, int> frequencies;

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            frequencies[ch]++;
        }
    }

    cout << "Character frequencies:\n";
    for (const auto& entry : frequencies) {
        cout << entry.first << ": " << entry.second << '\n';
    }
}

int main() {
    string paragraph;

    cout << "Enter a paragraph:\n";
    getline(cin, paragraph);

    frequencies(paragraph);

    return 0;
}
