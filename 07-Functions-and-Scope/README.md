# 🧩 Functions & Scope in C++

##  Overview

Functions allow us to divide a large program into smaller, reusable blocks of code.

This chapter covers function syntax, parameters, scope, overloading, and important mathematical problems.

Understanding functions is essential for writing modular, readable, and efficient programs.

---

## Topics Covered

- **Function Syntax**
- **Forward Declaration:**  
     - A function must be declared before it is used. 
     - Used when function is defined below main().

**- Parameters & Return Types**
**- Function Call in Memory:**
    When a function is called:
        - Memory is allocated in stack.
        - Parameters are copied.
        - Execution moves to function.
        - After completion, memory is released.

    This is called the Function Call Stack.

- **Local** (declared inside function) **& Global Scope** (declared outside all functions)
- **Function Overloading** : Multiple functions with the same name but different parameters.
- **Pass by Value**: A copy of the variable is passed.
- **Pass by Reference** : Original variable is passed using reference (&).


---

# 🔹 Function Syntax

### Basic Structure:

```cpp
return_type function_name(parameters) {
    // body
    return value;
}
