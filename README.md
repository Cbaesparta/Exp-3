# Aim
Writing a c++ code using the operators which 
are arithmetic ,assignment,comaprision,logical


# C++ Operators Examples


## Table of Contents

- [Introduction](#introduction)
- [Arithmetic Operators](#arithmetic-operators)
- [Logical Operators](#logical-operators)
- [Comparison Operators](#comparison-operators)
- [Assignment Operators](#assignment-operators)




## Arithmetic Operators

Arithmetic operators perform mathematical operations such as addition, subtraction, multiplication, and division.

- **Addition (+)**: Adds two operands.
- **Subtraction (-)**: Subtracts the second operand from the first.
- **Multiplication (*)**: Multiplies two operands.
- **Division (/)**: Divides the first operand by the second.
- **Modulus (%)**: Returns the remainder of a division operation.

## Logical Operators

Logical operators are used to combine or invert boolean expressions.

- **AND (&&)**: Returns true if both operands are true.
- **OR (||)**: Returns true if at least one operand is true.
- **NOT (!)**: Inverts the value of the operand.

## Comparison Operators

Comparison operators are used to compare two values.

- **Equal to (==)**: Returns true if both operands are equal.
- **Not equal to (!=)**: Returns true if operands are not equal.
- **Greater than (>)**: Returns true if the left operand is greater than the right.
- **Less than (<)**: Returns true if the left operand is less than the right.
- **Greater than or equal to (>=)**: Returns true if the left operand is greater than or equal to the right.
- **Less than or equal to (<=)**: Returns true if the left operand is less than or equal to the right.

## Assignment Operators

Assignment operators are used to assign values to variables.

- **Assignment (=)**: Assigns the right operand's value to the left operand.
- **Add and assign (+=)**: Adds the right operand to the left operand and assigns the result to the left operand.
- **Subtract and assign (-=)**: Subtracts the right operand from the left operand and assigns the result to the left operand.
- **Multiply and assign (*=)**: Multiplies the left operand by the right operand and assigns the result to the left operand.
- **Divide and assign (/=)**: Divides the left operand by the right operand and assigns the result to the left operand.
- **Modulus and assign (%=)**: Takes the modulus using the two operands and assigns the result to the left operand.


  # CODE
```
// Sai Sankar Jena
// 23070123112
// EnTC B2
// Exp-3 operators

#include <iostream>
using namespace std;

int main()
{
    // Arithmetic operators:
    int x, y, sum, sub, mult, divs, mod, inc, dcr;
    cout << "Enter the first number for arithmetic operation: ";
    cin >> x;
    cout << "Enter the second number for arithmetic operation: ";
    cin >> y;
    
    sum = x + y;
    cout << "x + y = " << sum;
    
    sub = x - y;
    cout << "\nx - y = " << sub;
    
    mult = x * y;
    cout << "\nx * y = " << mult;
    
    divs = x / y;
    cout << "\nx / y = " << divs;
    
    mod = x % y;
    cout << "\nx % y = " << mod;
    
    cout << "\nx++ = " << ++x;
    cout << "\nx-- = " << --x;

    // Comparison operators:
    int w, z, eq, neq, geq, leq, g, l;
    cout << "\nEnter the first number for comparison: ";
    cin >> w;
    cout << "Enter the second number for comparison: ";
    cin >> z;
    
    eq = (w == z);
    cout << "\n" << eq;
    
    leq = (w <= z);
    cout << "\n" << leq;
    
    geq = (w >= z);
    cout << "\n" << geq;
    
    g = (w > z);
    cout << "\n" << g;
    
    l = (w < z);
    cout << "\n" << l;
    
    neq = (w != z);
    cout << "\n" << neq;

    // Logical operators:
    int j, k, a, o, n;
    cout << "\nEnter the first number for logical operation: ";
    cin >> j;
    cout << "Enter the second number for logical operation: ";
    cin >> k;
    
    cout << "\n" << (x > 1 && x < 10);
    cout << "\n" << (x > 1 || x < 10);
    cout << "\n" << (!(x > 1 && x < 10));

    // Assignment operators:
    int s;
    cout << "\nEnter the first number for assignment: ";
    cin >> s;
    
    cout << "\n" << s;
    
    s += 3;
    cout << "\n" << s;
    
    s -= 3;
    cout << "\n" << s;
    
    s *= 3;
    cout << "\n" << s;
    
    s /= 3;
    cout << "\n" << s;
    
    s %= 3;
    cout << "\n" << s;
    
    s &= 3;
    cout << "\n" << s;
    
    s |= 3;
    cout << "\n" << s;
    
    s ^= 3;
    cout << "\n" << s;
    
    s >>= 3;
    cout << "\n" << s;
    
    s <<= 3;
    cout << "\n" << s;

    

    return 0;
}
```
# Conclusion

Arithmetic Operators: Handle basic math operations like addition and multiplication.

Logical Operators: Evaluate boolean expressions with &&, ||, and !.

Comparison Operators: Compare values using ==, !=, <, >, <=, >=.

Assignment Operators: Combine assignment with operations (e.g., +=, -=).




  
