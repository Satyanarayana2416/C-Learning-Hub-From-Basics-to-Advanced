## Strings in C++

Strings are sequences of characters used to represent text or data in programming. In C++, you can work with strings using the <string> header file.

## Syntax of String

```cpp
string variable_name;
```

## Declaration of String

```cpp
string str;
```

## Accessing Elements of String

```cpp
string str;
cin>>str;
cout<<str[0];
```

## Updating Elements of String

```cpp
string str;
cin>>str;
str[0] = 'a';
cout<<str[0];
```

## String Traversal

```cpp
string str;
cin>>str;
for(int i=0; i<str.length(); i++){
    cout<<str[i]<<" ";
}
```
## String Input Having Spaces

if the given user input is like this "Hello World", if we use `cin>>str;` it will only store "Hello" and ignore the rest of the string.

In-order to print the full sentence we use `getline(cin,str);`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; // Declaration of string
    getline(cin,str); // reads the entire line including spaces
    cout<<str<<endl;
    return 0;
}
```
## string operations

*concatenation:-*you can concatenate the string using `+` operator or `append()` method.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "World";
    cout<<str1 + str2<<endl;
    str1.append(str2);
    cout<<str1<<endl;
    return 0;
}
```
`Length of the String:-`you can find the length of the string using `.length()` or `.size()` method.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    return 0;
}
```

