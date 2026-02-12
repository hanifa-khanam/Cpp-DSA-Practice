#  Nested Loops & Pattern Problems in C++

##  Overview

This chapter focuses on mastering nested loops through pattern-based problems.

Pattern questions strengthen logical thinking, improve control over loops, and prepare for more advanced topics like matrices and 2D arrays.

Although they look simple, pattern problems are powerful tools for understanding iteration deeply.

---

##  Concepts Covered

- Nested Loops
- Star Pattern
- Inverted Star Pattern
- Half Pyramid Pattern
- Character Pyramid Pattern
- Hollow Rectangle Pattern
- Inverted & Rotated Half-Pyramid
- Floyd’s Triangle
- Diamond Pattern
- Butterfly Pattern

---

#  What is a Nested Loop?

A nested loop is a loop inside another loop.

Outer loop → Controls rows

Inner loop → Controls columns

### Basic Structure:

```cpp
for(int i = 1; i <= rows; i++) {
    for(int j = 1; j <= columns; j++) {
        cout << "* ";
    }
    cout << endl;
}