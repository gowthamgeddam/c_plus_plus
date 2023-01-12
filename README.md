# c_plus_plus
Learning C++

## What is C++?
- C++ is a cross-platform language that can be used to create high-performance applications.
- C++ was developed by Bjarne Stroustrup in the year 1985, as an *extension* to **C** Language.
- Thus it is named `C++` meaning `C+1`.
- C++ gives programmers a high level of control over system resources and memory.
- C++ is an object-oriented programming language
- **Note:** The main difference between C and C++, is that C++ supports objects and classes while C doesn't.
- You can find more about it at w3schools

## Hello World!
- printing "Hello world!" on the screen is the most fundamental (or maybe the first) program that everyone writes when they are learning to code.
- [Here][HelloWorld]'s how we can do that in c++.
- [hello.cpp][HelloWorld]
    ```
    //This is a c++ program to print hello world!
    #include <iostream>
    int main(void)
    {
        std::cout << "Hello World!\n";
        return 0;
    }
    ```
- See `.cpp` in the filename. That is the file extension used for all the c++ code files.

- `//` two slashes are used to write single line "comments".
- `/* */` - This is used for writing multi-line "comments".  
- Comments are useful for us to understand the code, but they are not executed.

- we use `#include` to include a [library][c++library].
- iostream is inbuilt c++ library that we include here.
- It has necessary instructions for printing and other functions for manipulating input and output.
- A function is a block of code with a set of instructions that are performed when called using a name (function name). More about functions later.
- `main` is the default function that executes (or get called) first while running a program.
- `std::cout` using `cout` function in `std` to print the output.
- `int` and `void` are datatypes.
- `return 0;` says to computer that everything went well.

- More about all these [later][datatypes].
---
[HelloWorld]: ./hello.cpp
[c++library]: https://duckduckgo.com/?q=c%2B%2B+library
[datatypes]: ./datatypes_conditionals.md