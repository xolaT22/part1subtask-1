#include <iostream>
#include <map>
#include <string>

using namespace std;


map<char, string> morseCode = {
    {'A', ".-"},    {'B', "-..."},  {'C', "-.-."}, {'D', "-.."},v
    {'E', "."},     {'F', "..-."},  {'G', "--."},  {'H', "...."},
    {'I', ".."},    {'J', ".---"},  {'K', "-.-"},  {'L', ".-.."},
    {'M', "--"},    {'N', "-."},    {'O', "---"},  {'P', ".--."},
    {'Q', "--.-"},  {'R', ".-."},   {'S', "..."},  {'T', "-"},
    {'U', "..-"},   {'V', "...-"},  {'W', ".--"},  {'X', "-..-"},
    {'Y', "-.--"},  {'Z', "--.."},  {' ', " "}
};

int main() {
    string input;
    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, input);

    // Convert to uppercase
    for (char &c : input)
        c = toupper(c);

    cout << endl;

    // Print Morse code per letter
    for (char c : input) {
        if (morseCode.count(c)) {
            cout << c << ": " << morseCode[c] << endl;
        }
    }

    
    cout << "\nFull Morse Code Message: ";
    for (char c : input) {
        if (morseCode.count(c)) {
            cout << morseCode[c] << "   ";  // 3 spaces between letters
        }
    }

    cout << endl;
    
}
