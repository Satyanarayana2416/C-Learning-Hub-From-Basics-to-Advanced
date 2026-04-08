#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence; // Hello World
    string word; // Hello World
    getline(cin, sentence); // User Input is stored in 'sentence' variable
    cout << "You entered: " << sentence << endl; // Output is printed
    
    cin >> word; // User Input is stored in 'word' variable but it will only store the first word
    cout << "You entered: " << word << endl; // Output is printed
    
    return 0;
}

/*
Output:
You entered: Hello World
You entered: Hello

*/