# PROBLEM 1
## Logical Operatos

The logical operators, and C language, use 1 to represent true and 0 to represent false. The logical operators compare bits in two numbers and return true or false, 1 or 0, for each bit compared.

Bitwise AND operator (&) -The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of the corresponding bit is evaluated to 0.

Bitwise OR operator (|) - The output of bitwise OR operator is 1 if at least one corresponding bit of two operands is 1.

Bitwise XOR/Exclusive OR operator (^) - The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite.

### Problem :
You will be given an integer n, and a threshold k. For each number 'i' from 1 to 'n'
-Find the maximum value of the logical AND, OR, and XOR when compared against all 'i' and 'n' (n which are greater than i)
-Consider a value only if the comparison returns are result less than K. 
-Print the result of the AND, OR and XOR on separate lines.

Example
n = 3
k = 3

The result of comparison are :
a  b    AND  OR  XOR
1  2     0   3    3
1  3     1   3    2
2  3     2   3    1

For the AND comparison, the maximum is 2. For the OR comparison, none of the values is less than k, so the maximum is . For the XOR comparison, the maximum value less than k is 2.