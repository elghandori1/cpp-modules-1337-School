#include <iostream>
#include <string>
using namespace std;

int main(){
    cout <<"enter your input: ";
    string input;
    getline(cin,input);
    string tmpS = input.c_str();
    int i =0;
    int count =0;
    while(tmpS[i]){
        if(tmpS[i] != ' ')
        {
            count++;
        }
        i++;
    }
    cout << "Size without spaces is: " << count << endl;
    return 0;
}

//---------- another method

/*
int main() {
    cout << "Enter your input: ";
    string input;
    getline(cin, input);

    int count = 0;
    for (char ch : input) { // Use a range-based for loop
        if (ch != ' ') {
            count++;
        }
    }
    cout << "Size without spaces is: " << count << endl;
    return 0;
}
*/