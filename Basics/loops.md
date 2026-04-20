## LOOPS in c++

Loops are used to execute a block of code multiple times. until a certain condition is met.

### Types of loops

1. for loop
2. while loop
3. do-while loop
4. nested loop

## For Loop
For loop is used to exicute the block of code a specific nummber of times, controlled by an initial condition, a condition for continuation, and an update statement.

### Syntax

```cpp
for (initialization; condition; update) {
    // code to be executed
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    return 0;
}
```
## While Loop
While loop is used to exicute the block of code multiple times, controlled by a condition.
As long as the condition is true, the block of code will be executed.

### Syntax

```cpp
while (condition) {
    // code to be executed
}
```

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }
    return 0;
}
```
