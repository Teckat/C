#include <iostream>

using namespace std;

// int function_name(int , int ,float){
//       ...code
// }

//  types of functions

// 1. no return no parameter
// 2. no return with parameter
// 3. with return no parameter
// 4. with return with parameter

// 1. no return no parameter

// void display()
// {
//     int x = 10;
//     cout << x << endl;
// }

// int main()
// {
//     display();

//     display();

//     display();
//     return (0);
// }

// 2. no return with parameter

// void display(int val)
// {
//     cout << val << endl;
// }

// int main()
// {
//     int x = 10;
//     display(x);

//     display(x);

//     display(x);
//     return (0);
// }

// 3. with return no parameter

// int display()
// {
//     int x = 10;
//     return (x);
// }

// int main()
// {
//     int val;
//     val = display();
//     cout << val << endl;

//     val = display();
//     cout << val << endl;

//     val = display();
//     cout << val << endl;
//     return (0);
// }

// 4. with return with parameter

int sum(int a, int b)
{
    // int sum = 0;
    // sum = a + b;
    return (a + b);
}

int main()
{
    int val, a, b;

    cout << "enter two nos";
    cin >> a >> b;

    val = sum(a, b);

    cout << "sum = " << val;
    return (0);
}