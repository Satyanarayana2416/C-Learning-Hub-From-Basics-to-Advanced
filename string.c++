#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Our, World!";
    cout<<s<<endl; // Output: Our, World!
    cout<<s[0]<<endl; //Output: O
    s[1] = 'A';
    cout<<s<<endl; //Output: OAr, World!
    return 0;
}