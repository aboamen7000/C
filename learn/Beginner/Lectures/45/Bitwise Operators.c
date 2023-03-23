#include <stdio.h>

// bitwise operators : are operators that operate on the individual bits of integer values. 
//                     They are used to perform bitwise operations such as shifting bits left or right,
//                     setting bits to 1 or 0, or performing logical operations on individual bits.

// Example : unsigned int a = 10;                // Binary: 1010
//           unsigned int b = 6;                 // Binary: 0110
//           unsigned int c = a ? b;             // Binary: ???? 

// About Bitwise operators : are useful in situations where you need to manipulate individual bits of a value or 
//                           when working with binary data. They are commonly used in low-level programming and embedded systems,
//                           where hardware manipulation and optimization are required

int main() {

    // Bitwise AND operator (&)
    // Bitwise AND (&): The bitwise AND operator compares each bit of two integers and returns a new 
    //                  integer with bits set only if both operands have bits set at the same position.
        unsigned int a = 10;       // Binary: 1010   
        unsigned int b = 6;        // Binary: 0110
        unsigned int c = a & b;    // Binary: 0010, Decimal : 2


    // Bitwise OR operator (|)
    // Bitwise OR (|): The bitwise OR operator compares each bit of two integers and returns a new integer with bits set 
    //                 if at least one of the operands has a bit set at the same position.
        unsigned int aa = 10; // Binary: 1010
        unsigned int bb = 6;  // Binary: 0110
        unsigned int result = aa | bb; // Binary: 1110, Decimal: 14


    // Bitwise XOR operator (^)
    // Bitwise XOR (^): The bitwise XOR operator compares each bit of two integers and returns a new integer with bits set only 
    //                  if one operand has a bit set at the same position and the other operand does not.
        unsigned int aaa = 10; // Binary: 1010
        unsigned int bbb = 6;  // Binary: 0110
        unsigned int resultt = aaa ^ bbb; // Binary: 1100, Decimal: 12

    // Bitwise complement operator (~)
    // Bitwise complement (~): The bitwise complement operator inverts all the bits of an integer.
        unsigned int aaaa = 10; // Binary: 1010
        unsigned int resulttt = ~aaaa; // Binary: 0101, Decimal: 4294967285

    // Bitwise Left shift operator (<<)
    // Left shift (<<): The left shift operator shifts the bits of an integer to the left by a specified number of positions.
        unsigned int aaaaa = 5; // Binary: 0101
        unsigned int resultttt = aaaaa << 2; // Binary: 010100, Decimal: 20

    // Bitwise Right shift operator (>>)
    // Right shift (>>): The right shift operator shifts the bits of an integer to the right by a specified number of positions.
        unsigned int aaaaaa = 20; // Binary: 010100
        unsigned int resulttttt = aaaaaa >> 2; // Binary: 0101, Decimal: 5
        return 0;
}
