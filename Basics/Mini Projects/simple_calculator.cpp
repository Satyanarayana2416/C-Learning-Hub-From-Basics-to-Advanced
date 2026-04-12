/* Simple Calculator
Concepts: Input/Output, Arithmetic operators, Conditional statements
Description: Create a program that takes two numbers and an operator (+, -, *, /) from the user and displays the result.

Features: Use switch or if-else statements to handle different operations*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    char op;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operator: ";
    cin>>op;
    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Invalid operator";
            break;
    }    
}