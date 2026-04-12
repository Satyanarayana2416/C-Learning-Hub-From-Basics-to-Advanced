#include <bits/stdc++.h>
using namespace std;

int main() {
    // logical operators
    bool x = true;
    bool y = false;
    cout << "logical operators" << endl;
    cout << (x && y) << endl;
    cout << (x || y) << endl;
    cout << (!x) << endl;
    // arithmetic operators
    int a = 10;
    int b = 20;
    cout << "arithmetic operators" << endl;
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;
    // relational operators
    int c = 10;
    int d = 20;
    cout << "relational operators" << endl;
    cout << (c == d) << endl;
    cout << (c != d) << endl;
    cout << (c < d) << endl;
    cout << (c > d) << endl;
    cout << (c <= d) << endl;
    cout << (c >= d) << endl;
    // assignment operators
    int e = 10;
    int f = 20;
    cout << "assignment operators" << endl;
    cout << (e = f) << endl;
    cout << (e += f) << endl;
    cout << (e -= f) << endl;
    cout << (e *= f) << endl;
    cout << (e /= f) << endl;
    cout << (e %= f) << endl;
    // bitwise operators
    int g = 10;
    int h = 20;
    cout << "bitwise operators" << endl;
    cout << (g & h) << endl;
    cout << (g | h) << endl;
    cout << (g ^ h) << endl;
    cout << (~g) << endl;
    cout << (g << h) << endl;
    cout << (g >> h) << endl;
    // ternary operator
    int i = 10;
    int j = 20;
    cout << "ternary operator" << endl;
    cout << (i > j ? i : j) << endl;
    return 0;
}