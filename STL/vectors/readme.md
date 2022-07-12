# Dynamic Arrays in C++ (std::vector)

In C++, vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically. That is, we can change the size of the vector during the execution of a program as per our requirements.
Vectors are part of the C++ Standard Template Library. To use vectors, we need to include the `<vector>` header file in our program.

## C++ Vector Declaration

`std::vector<T> vector_name;` \
The type parameter <T> specifies the type of the vector. It can be any primitive data type such as int, char, float, etc. For example,

## C++ Vector Initialization

```
vector<int> vector1 = {1, 2, 3, 4, 5};  // Initializer list
vector<int> vector2 {1, 2, 3, 4, 5};    // Uniform initialization
vector<int> vector3(5, 12); // 5 is the size of the vector and 12 is the value.
```

This code creates an int vector with size 5 and initializes the vector with the value of 12. So, the vector is equivalent to
vector<int> vector3 = {12, 12, 12, 12, 12};

## Basic Vector Operations

1. Add Elements to a Vector \  
   To add a single element into a vector, we use the `push_back()` function. It inserts an element into the end of the vector.
2. Access Elements of a Vector \  
   Here, we use the `at()` function to access the element from the specified index.
3. Change Vector Element
   We can change an element of the vector using the same `at()` function.
4. Delete Elements from C++ Vectors
   To delete a single element from a vector, we use the `pop_back()` function.

## C++ Vector Functions

| Function   | Description                                          |
| ---------- | ---------------------------------------------------- |
| size()     | returns the number of elements present in the vector |
| clear()    | removes all the elements of the vector               |
| front()    | returns the first element of the vector              |
| back()     | returns the last element of the vector               |
| empty()    | returns 1 (true) if the vector is empty              |
| capacity() | check the overall size of a vector                   |

## C++ Vector Iterators

Vector iterators are used to point to the memory address of a vector element. In some ways, they act like pointers in C++.
We can create vector iterators with the syntax
`vector<T>::iterator iteratorName;` \
For example, if we have 2 vectors of int and double types, then we will need 2 different iterators corresponding to their types:

```
// iterator for int vector
vector<int>::iterator iter1;

// iterator for double vector
vector<double>::iterator iter2;
```

### Initialize Vector Iterators

We can initialize vector iterators using the begin() and end() functions.

1. begin() function \
   The begin() function returns an iterator that points to the first element of the vector. For example,

   ```
   vector<int> num = {1, 2, 3};
   vector<int>::iterator iter;

   // iter points to num[0]
   iter = num.begin();
   ```

2. end() function \
   The end() function points to the theoretical element that comes after the final element of the vector. For example,

   ````// iter points to the last element of num
   iter = num.end() - 1;```
   Here, due to the nature of the end() function, we have used the code num.end() - 1 to point to the last element of the num vector i.e. num[2].
   ````
