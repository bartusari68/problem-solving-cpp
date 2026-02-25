#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int maxValue = a;

    if (b > maxValue) {
        maxValue = b;
    }

    if (c > maxValue) {
        maxValue = c;
    }

    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
