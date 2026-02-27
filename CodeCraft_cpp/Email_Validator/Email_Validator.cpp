#include <iostream>
using namespace std;

int countOf(string str)
{
    int i = 0;
    int c = 0;
    string tmpS = str.c_str();
    while (tmpS[i])
    {
        if (tmpS[i] == '@')
        {
            c++;
        }
        i++;
    }
    return c;
}

int main()
{
    cout << "enter your email: ";
    string email;

    while (1)
    {
        cin >> email;
        int atCount = countOf(email);
        if(atCount == 0){
            cout << "Please include '@' in your email: ";
        }else if (atCount > 1) {
            cout << "Please include only one '@' in your email: ";
        } else {
            break;
        }
        email.clear();
    }
    cout << "great your email is : " << email << endl;
    return 0;
}