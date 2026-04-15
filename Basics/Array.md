## Array in C++

Arrays are organized data structures capable of storing a specific quantity of elements, all of the same data type, in adjacent memory slots. 

They act as containers for managing and retrieving items based on their position or index.

## Syntax of Array

```cpp
int arr[size];
```

## Declaration of Array

```cpp
int arr[5];
```

## contiguous memory allocation

```cpp
int arr[5] = {1,2,3,4,5};
```

## Accessing Elements of Array

```cpp
int arr[5] = {1,2,3,4,5};
cout<<arr[0];
```

## Updating Elements of Array

```cpp
int arr[5] = {1,2,3,4,5};
arr[0] = 10;
cout<<arr[0];
```

## Array Traversal

```cpp
int arr[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
      cout<<arr[i]<<" ";
  }
```
## Multi-dimensional Array

Multi-dimensional arrays are arrays that have more than one dimension. They are used to store data in a tabular format.

## Syntax of Multi-dimensional Array

```cpp
int arr[rows][cols];
```

## Access Elements in 2D Array

```cpp
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
cout<<arr[0][0];
```

## Updating Elements in 2D Array

```cpp
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
arr[0][0] = 10;
cout<<arr[0][0];
```

## 2D Array Traversal

```cpp
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
```
