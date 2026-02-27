#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout <<"enter the size: ";
    int size;
    cin >> size;
    vector<int> numbers;
    int num = 0;
    int i =0;
    while(i < size){
        cout <<"enter the " << i+1 <<" number : ";
        cin>> num;
        numbers.push_back(num);
        i++;
    }
    std::vector<int>::iterator it = numbers.begin();
    int max = numbers[0];
    int min = numbers[0];
    while(it != numbers.end()){
        if(*it >= max){
            max = *it;
        }
        else if(*it <= min){
            min = *it;
        }
        it++;
    }
    cout <<"the numbers is ";
    for(auto it : numbers){
        cout <<"| " << it << " ";
    }
    cout <<"|" <<endl;
    cout <<"the max is ["<< max <<"] and the min is [" <<min <<"]"<<endl;
    return 0;
}


//---------- another method Using a range-based for loop

/*
#include <iostream>
#include <vector> // Include only the required headers
using namespace std;

int main() {
    cout << "Enter the size: ";
    int size;
    cin >> size;

    vector<int> numbers;
    int num;

    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> num;
        numbers.push_back(num);
    }

    int max = numbers[0];
    int min = numbers[0];

    for (int value : numbers) { // Use a range-based for loop
        if (value > max) {
            max = value;
        }
        if (value < min) {
            min = value;
        }
    }
    cout << "The numbers are: | ";
    for (int value : numbers) {
        cout << value << " | ";
    }
    cout << endl;
    cout << "The max is [" << max << "] and the min is [" << min << "]" << endl;

    return 0;
}
*/