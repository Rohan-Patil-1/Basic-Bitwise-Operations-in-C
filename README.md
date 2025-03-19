# Bitwise-Operations-in-C

## Overview

This repository is dedicated to practicing fundamental bitwise operations in the C programming language. The goal is to implement various bitwise functions using only specified operators while avoiding pre-built functions or external libraries. Each function comes with constraints regarding which operators are permitted, making this an excellent exercise for understanding bitwise manipulations at a low level. 


### System Details

OS: OracleLinux 8.10 x86_64

CPU Model: Intel(R) Xeon(R) Gold 6134 CPU @ 3.20GHz

vCPU Count: 2

RAM: 4 GB


## Getting Started


### Prerequisites

1. Basic understanding of the C programming language.

2. A C compiler (such as GCC or Clang) installed on your system.


### Compilation Instructions

To compile the code, use the following command in your terminal:

```_gcc -o bitwise_operations bitwise_operations.c_```

Then, run the compiled executable:

```_./bitwise_operations_```


## Function Implementations

Each function is designed with specific constraints on the legal operators. Below are some of the functions you need to implement:

1. bitOr - Computes the bitwise OR operation using only ~ (bitwise NOT) and & (bitwise AND).

2. bitAnd - Computes the bitwise AND operation using only ~ (bitwise NOT) and | (bitwise OR).

3. bitXor - Computes the bitwise XOR operation using only ~ (bitwise NOT) and & (bitwise AND).

4. isZero - Returns 1 if the input integer is 0, otherwise returns 0.

5. tmin2 - Returns the second smallest two’s complement integer.

6. negate - Returns the negation of the input integer.

7. isNegative - Returns 1 if the input integer is negative, otherwise returns 0.

8. isAsciiDigit - Determines if an integer represents an ASCII digit (0x30 to 0x39).

9. conditional - Implements the ternary conditional operator x ? y : z using only bitwise and logical operators.

10. rotate4 - Performs a right bitwise rotation by 4 positions.

11. allOddBits - Checks if all odd-numbered bits in an integer are set to 1.

12. divpwr2 - Computes x / (2^n) rounding toward zero.

13. byteSwap - Swaps the n-th and m-th bytes of an integer.

14. logicalShift - Performs a logical right shift instead of an arithmetic shift.

15. addOK - Determines whether the sum of two integers causes overflow.

16. bang - Computes !x without using the ! operator.

17. isLess - Returns 1 if x < y, otherwise returns 0.

18. is0orMore - Returns 1 if x >= 0, otherwise returns 0.
    

## How to Contribute

Fork the repository.

Work on the TO-DO sections in the provided C file.

Compile and test your implementations.

Submit a pull request with your changes.


## License

This project is open-source and available under the MIT License.



**HAPPY CODING**
