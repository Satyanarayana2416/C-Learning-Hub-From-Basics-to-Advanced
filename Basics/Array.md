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
