#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string input;
    char c, r;
    cout << "Enter a string: ";
    getline(cin, input);

    string character;
    cout << "Enter the character to replace: ";
    while (true) {
        getline(cin, character);
        if (character.size() == 1) {
            c = character[0];
            break;
        } else {
            cout << "Please enter exactly one character to replace: ";
        }
    }

    string replace;
    cout << "Enter the replacement character: ";
    while (true) {
        getline(cin, replace);
        if (replace.size() == 1) {
            r = replace[0];
            break;
        } else {
            cout << "Please enter exactly one replacement character: ";
        }
    }

    size_t i = 0;
    string modifiedString = input;
    while (i < modifiedString.size()) {
       
        if (modifiedString[i] == c) {
            modifiedString[i] = r;
        }
        i++;
    }
   if (input != modifiedString){ // or use if(strcmp(input.c_str(),modifiedString.c_str()) != 0)
        cout << "Modified string: " << modifiedString << endl;
    }else{
        cout << "No string modified: " << input << endl;
    }
    return 0;
}