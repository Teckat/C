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

int main()
{
    float a = 10, b = 25;
    float c;

    cout << "a+b =" << a + b << endl;
    cout << " a-b = " << a - b << endl;
    cout << " a*b = " << a * b << endl;
    c = float(a / b);
    cout << " a/b = " << c << endl;
    // cout << " a%b = " << b % a << endl;
    return (0);
}