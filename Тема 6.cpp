#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "Containers";
    string s3 = s1 + " " + s2;

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "Concatenation: " << s3 << endl;
    cout << "Length of s3 = " << s3.length() << endl;

    vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(10);
    numbers.push_back(15);

    cout << "Vector elements: ";
    for (int i = 0; i < (int)numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Vector size = " << numbers.size() << endl;
    cout << "Vector capacity = " << numbers.capacity() << endl;

    return 0;
}
