#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() {
    list<int> values;
    values.push_back(10);
    values.push_back(20);
    values.push_back(30);

    cout << "List elements: ";
    for (int x : values) {
        cout << x << " ";
    }
    cout << endl;

    map<string, int> grades;
    grades["Math"] = 90;
    grades["Physics"] = 85;
    grades["Programming"] = 100;

    cout << "Map elements:" << endl;
    for (auto item : grades) {
        cout << item.first << " -> " << item.second << endl;
    }

    return 0;
}
