#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 24;
    float d = 5.51564;
    double e = 3.14159265359;
    char f = 'S';
    string g = "Programming Language";
    long b = 1234567890L;
    long long c = 123456789012345LL;
    bool x = false;

    cout << "Integer a = " << a << " and size is " << sizeof(a) << " bytes" << endl;
    cout << "long b = " << b << " and size is " << sizeof(b) << " bytes" << endl;
    cout << "long long c = " << c << " and size is " << sizeof(c) << " bytes" << endl;
    cout << "float d = " << d << " and size is " << sizeof(d) << " bytes" << endl;
    cout << "double e = " << e << " and size is " << sizeof(e) << " bytes" << endl;
    cout << "char f = " << f << " and size is " << sizeof(f) << " bytes" << endl;
    cout << "string g = " << g << " and size is " << sizeof(g) << " bytes" << endl;
    cout << "boolean value x = " << x << " and size is " << sizeof(x) << " bytes" << endl;

    return 0;
}

/* output
Integer a = 24 and size is 4 bytes
long b = 1234567890 and size is 8 bytes
long long c = 123456789012345 and size is 8 bytes
float d = 5.51564 and size is 4 bytes
double e = 3.14159 and size is 8 bytes
char f = S and size is 1 bytes
string g = Programming Language and size is 32 bytes
boolean value x = 0 and size is 1 bytes
*/