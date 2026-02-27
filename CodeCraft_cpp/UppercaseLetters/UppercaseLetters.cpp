#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string checkUper(string s)
{
    string ch = s.c_str();
    string buf;
    int i =0;
    while(ch[i])
    {
        if(isupper(ch[i])){
            buf.push_back(ch[i]);
        }
        i++;
    }
    return buf;
}

int main()
{
    cout <<"enter the paragraphe: ";
    string paragraphe;
    getline(cin,paragraphe);
    string result;

    if(checkUper(paragraphe).size() != 0){
       result = checkUper(paragraphe);
       cout << "Uppercase letters in your paragraph: " << result << endl;
    }
    else
        cout << "No uppercase letters in your paragraph!" << endl;
    return 0;
}

//---------- another method

/*
string checkUpper(const string& s) {
    string result;
    for(char ch : s){
        if(isupper(ch)){
            result.push_back(ch);
        }
    }
    return result;
}

int main() {
    cout << "Enter the paragraph: ";
    string paragraph;
    getline(cin, paragraph);
    string result = checkUpper(paragraph);
    if(!result.empty()){
        cout << "Uppercase letters in your paragraph: " << result << endl;
    }else{
        cout << "No uppercase letters in your paragraph!" << endl;
    }
    return 0;
}
*/