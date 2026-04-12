## What is C++?

C++ is a high-performance, general-purpose programming language that is widely used for system programming, game development, and high-performance computing. It is a statically typed, compiled language that supports both procedural and object-oriented programming paradigms.

C++ is a popular choice in technical interviews due to its efficiency and control over system resources, making it a valuable skill for software developers.

## Why Learn C++?

1. **Performance**: C++ is known for its speed and efficiency, making it ideal for performance-critical applications.
2. **Versatility**: It can be used for a wide range of applications, including game development, system programming, and high-performance computing.
3. **Control**: C++ gives developers low-level control over system resources, allowing for optimized performance.
4. **Community**: It has a large and active community, providing ample resources and support for learners.
5. **Career Opportunities**: C++ skills are in high demand in the job market, with opportunities in various industries.

## C++ Basic Syntax

```cpp
#include <iostream>
using namespace std;

int main() {
    //...code...
    return 0;
}
```

## C++ Basic Syntax Explanation

1. **`#include <iostream>`**: This is a preprocessor directive that includes the input/output stream library, which provides functions for input and output operations.
2. **`using namespace std;`**: This line allows us to use elements from the standard namespace, such as `cout` and `cin`, without having to prefix them with `std::`.
3. **`int main() { ... }`**: This is the main function, the entry point of every C++ program. The code inside the curly braces is executed when the program is run.
4. **`return 0;`**: This indicates that the program has executed successfully. A return value of 0 is conventionally used to denote successful execution.

## Key Points to Remember:
1. **`Semicolon`**: Every statement in C++ must end with a semicolon.
2. **`Curly Braces`**: Curly braces are used to define the scope of a function or a block of code.
3. **`Comments`**: Comments are used to explain the code and are ignored by the compiler. They can be single-line (`//`) or multi-line (`/* ... */`).
4. **`Indentation`**: Proper indentation makes the code more readable but does not affect the compilation process.
5. **`endl`**: `endl` is used to insert a newline character and flush the output buffer.

## Comments in C++

Comments are used to explain the code and are ignored by the compiler. They can be single-line (`//`) or multi-line (`/* ... */`).

```cpp
// This is a single-line comment
/* This is a multi-line comment */
```

## Input and Output in C++

Input and output operations are performed using the `cin` and `cout` objects, respectively. These objects are defined in the `<iostream>` header file.

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    return 0;
}
```
1. **`cin`**: `cin` is used to read input from the user.
2. **`cout`**: `cout` is used to display output to the user.
3. **`<<`**: `<<` is the insertion operator, used to insert data into the output stream.
4. **`>>`**: `>>` is the extraction operator, used to extract data from the input stream.
5. **`endl`**: `endl` is used to insert a newline character and flush the output buffer.

## Data Types in C++

Data types are used to define the type of data that a variable can hold. They are used to define the type of data that a variable can hold. They are used to define the type of data that a variable can hold.

| Data Type | Description | Size | Range |
|-----------|-------------|------|-------|
| `int` | Integer | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `float` | Floating-point | 4 bytes | 3.4e-38 to 3.4e+38 |
| `double` | Double-precision floating-point | 8 bytes | 1.7e-308 to 1.7e+308 |
| `char` | Character | 1 byte | -128 to 127 |
| `bool` | Boolean | 1 byte | 0 to 1 |
| `void` | No value | 0 bytes | N/A |
| `string` | String | Variable | N/A |
| `long` | Long integer | 8 bytes | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `short` | Short integer | 2 bytes | -32,768 to 32,767 |
| `long long` | Long long integer | 8 bytes | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |

## Operations in c++
operations are the symbols that perform some operations on the variables.

| Operation | Symbol |
|-----------|--------|
| Addition | + |
| Subtraction | - |
| Multiplication | * |
| Division | / |
| Modulus | % |
| Increment | ++ |
| Decrement | -- |
| Assignment | = |
| Comparison | ==, !=, <, >, <=, >= |
| Logical | &&, ||, ! |
| Bitwise | &, |, ^, ~, <<, >> |
| Ternary | ? : |

c++ supports various types of operators, including logical, arthmetic, relational and assignment operators.

## Logical Operators in C++

Logical operators are used to perform logical operations on the variables. They are used to perform logical operations on the variables. They are used to perform logical operations on the variables. They return a boolean value, i.e., true or false.

| Operator | Description |
|----------|-------------|
| `&&` | Logical AND |
| `||` | Logical OR |
| `!` | Logical NOT |

```cpp
int a = 10;
int b = 20;
if (a > 5 && b > 15) {
    cout << "Both conditions are true" << endl;
}
else if (a > 5 || b > 15) {
    cout << "At least one condition is true" << endl;
}
else {
    cout << "Neither condition is true" << endl;
}
```

## Arithmetic Operators in C++

Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, division, and modulus.

| Operator | Description |
|----------|-------------|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Modulus |

```cpp
int a = 10;
int b = 20;
cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;
```

## Relational Operators in C++

Relational operators are used to compare two values. They return a boolean value, i.e., true or false.

| Operator | Description |
|----------|-------------|
| `==` | Equal to |
| `!=` | Not equal to |
| `<` | Less than |
| `>` | Greater than |
| `<=` | Less than or equal to |
| `>=` | Greater than or equal to |

```cpp
int a = 10;
int b = 20;
if (a == b) {
    cout << "a is equal to b" << endl;
}
else if (a != b) {
    cout << "a is not equal to b" << endl;
}
else if (a < b) {
    cout << "a is less than b" << endl;
}
else if (a > b) {
    cout << "a is greater than b" << endl;
}
else if (a <= b) {
    cout << "a is less than or equal to b" << endl;
}
else if (a >= b) {
    cout << "a is greater than or equal to b" << endl;
}
```

## Assignment Operators in C++

Assignment operators are used to assign values to variables. They are used to assign values to variables. They are used to assign values to variables. They return the assigned value.

| Operator | Description |
|----------|-------------|
| `=` | Assign |
| `+=` | Add and assign |
| `-=` | Subtract and assign |
| `*=` | Multiply and assign |
| `/=` | Divide and assign |
| `%=` | Modulus and assign |

```cpp
int a = 10;
int b = 20;
a += b;
cout << a << endl;
a -= b;
cout << a << endl;
a *= b;
cout << a << endl;
a /= b;
cout << a << endl;
a %= b;
cout << a << endl;
```

## Conditional Statements in C++

Control statements in programming are instructions that tell the computer what to do based on certain conditions. 

They allow the program to make decisions. If a condition is true, the program executes one block of code; if it’s false, it executes another block.

Following are some of the decision-making statements in C++:

| Statement | Description |
|-----------|-------------|
| `if` | If statement |
| `else` | Else statement |
| `else if` | Else if statement |
| `switch` | Switch statement |

### if statement

```cpp
int a = 10;
if (a > 5) {
    cout << "a is greater than 5" << endl;
}
```

### else statement

```cpp
int a = 10;
if (a > 5) {
    cout << "a is greater than 5" << endl;
}
else {
    cout << "a is not greater than 5" << endl;
}
```

### else if statement

```cpp
int a = 10;
if (a > 5) {
    cout << "a is greater than 5" << endl;
}
else if (a < 5) {
    cout << "a is less than 5" << endl;
}
else {
    cout << "a is equal to 5" << endl;
}
```
### Nested if statement

```cpp
int a = 10;
if (a > 5) {
    cout << "a is greater than 5" << endl;
    if (a > 10) {
        cout << "a is greater than 10" << endl;
    }
}
```

### switch statement

```cpp
int a = 10;
switch (a) {
    case 10:
        cout << "a is 10" << endl;
        break;
    case 20:
        cout << "a is 20" << endl;
        break;
    default:
        cout << "a is neither 10 nor 20" << endl;
}
```