#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

void calcSum(int a, int b) {
    cout << a << "+" << b << "=" << (a + b) << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
        return;
    }
    cout << a << "/" << b << "="
         << fixed << setprecision(2)
         << (static_cast<float>(a) / b) << endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;

    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int sum = retSum(a, b);
    cout << a << "+" << b << "=" << sum << endl;

    float result;

    try {
        result = retDiv(a, b);
        cout << a << "/" << b << "=" << fixed << setprecision(2)
             << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}