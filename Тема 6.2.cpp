#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class PrintValue {
public:
    void operator()(int x) const {
        cout << x << " ";
    }
};

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    vector<int> numbers = { 1, 2, 3, 4, 5, 6 };

    cout << "All elements: ";
    for_each(numbers.begin(), numbers.end(), PrintValue());
    cout << endl;

    int evenCount = count_if(numbers.begin(), numbers.end(), isEven);
    cout << "Count of even numbers = " << evenCount << endl;

    auto it = find_if(numbers.begin(), numbers.end(), isEven);
    if (it != numbers.end()) {
        cout << "First even element = " << *it << endl;
    }

    return 0;
}
