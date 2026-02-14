# Pointers

Understanding memory is essential for mastering C++.

This chapter introduces memory basics, addresses, pointers, references, and argument passing techniques.

Pointers allow direct interaction with memory and are fundamental for advanced topics like dynamic memory allocation, linked lists, trees, and STL.


---

##  Basic Concepts of Memory
Think of memory as a large storage of numbered boxes. Each "box" (variable) in our RAM has two primary attributes:

*  **An Address:** The unique identifier for that specific location in memory.

*  **A Stored Value:** The actual data held inside that location.

---

####  Address-of Operator (`&`)
The `&` operator is used to retrieve the memory address of a variable.

**Example:**
```cpp
int x = 10;
cout << &x; // Prints the hexadecimal memory address of x (e.g., 0x7ffe...)
```
---

#### Pointer

A **pointer** is a variable that **stores the address of another variable**.

**Example:**
```cpp
int x = 10;
int* ptr = &x;
```
Here: `ptr` stores the address of x, `*` indicates a pointer type

---

#### Dereference Operator (`*`)

The `*` operator is used to access the value stored at the address.

**Example:**
```cpp
cout << *ptr;
```
---

#### Null Pointer

A null pointer points to nothing.

**Example:**
```cpp
int* ptr = NULL;

Modern C++ uses: 
```cpp
int* ptr = nullptr;
```
---

#### Reference Variables

A reference variable is another name for an existing variable.

**Example:**
```cpp
int x = 10;
int &ref = x;
```
Both x and ref refer to the same memory location.