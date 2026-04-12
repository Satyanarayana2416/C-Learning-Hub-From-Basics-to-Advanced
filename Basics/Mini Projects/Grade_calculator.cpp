/* Grade Calculator & Analyzer
Concepts: Input/Output, Data types, Relational operators, Conditional statements
Description: Accept student marks and determine grade (A, B, C, D, F) based on percentage. Show pass/fail status.

Features: Use nested if-else or switch for grading logic */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade: A";
    }
    else if(marks>=80){
        cout<<"Grade: B";
    }
    else if(marks>=70){
        cout<<"Grade: C";
    }
    else if(marks>=60){
        cout<<"Grade: D";
    }
    else{
        cout<<"Grade: F";
    }
    return 0;
}
