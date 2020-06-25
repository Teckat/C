#include <iostream>
using namespace std;

// operators - 1. Arithmetic operator 2. Logical Operator  3. Relational Operator  4. Bitwise Operator
// 5. assignment operator

// 1. Arithmetic operator
//   + -> Addition
//   - -> Subtraction
//   * -> Multiplication
//   / -> Division
//   % -> Modulo ( remainder)

// int main()
// {
//     float a = 10, b = 25;
//     float c;

//     cout << "a+b =" << a + b << endl;
//     cout << " a-b = " << a - b << endl;
//     cout << " a*b = " << a * b << endl;
//     c = float(a / b);
//     cout << " a/b = " << c << endl;
//     return (0);
// }

//  4. Bitwise Operator
//    & -> Bitwise And
//    | -> Bitwise Or
//    ^ -> Bitwise Exclusive Or
//   << -> shift left
//   >> -> shift right

// & -> Bitwise And
// 0 & 0 -> 0
// 0 & 1 -> 0
// 1 & 0 -> 0
// 1 & 1 -> 1

//  12 ->      00001100
//  25 ->      00011001
//  25 & 12 -> 00001000 -> 8(decimal)

// | -> Bitwise Or
// 0 | 0 -> 0
// 0 | 1 -> 1
// 1 | 0 -> 1
// 1 | 1 -> 1

//  12 ->      00001100
//  25 ->      00011001
//  25 & 12 -> 00011101 -> 29(decimal)

// ^ -> Bitwise Exclusive Or
// 0 ^ 0 -> 0
// 0 ^ 1 -> 1
// 1 ^ 0 -> 1
// 1 ^ 1 -> 0

//  12 ->      00001100
//  25 ->      00011001
//  25 & 12 -> 00010101 -> 21(decimal)

// << -> Left shift
// 12 =      00001100
// 12 << 1 = 00011000 -> 24
// 12 << 2 = 00110000 -> 48

// >> -> Right shift
// 12 =      00001100
// 12 >> 1 = 00000110 -> 6
// 12 >> 2 = 00000011 -> 3

// Calculate Binary value into decimal
//  128  64  32  16  8  4  2  1

int main()
{

    int a = 12, b = 25, c;
    //  Bitwise And
    c = a & b;
    cout << "a & b -> " << c << endl;

    // Bitwise Or
    c = a | b;
    cout << "a | b -> " << c << endl;

    // Bitwise Xor
    c = a ^ b;
    cout << "a ^ b -> " << c << endl;

    //  left shift
    c = a << 2;
    cout << "a << b -> " << c << endl;

    //  right shift
    c = a >> 2;
    cout << "a >> b -> " << c << endl;

    return (0);
}
