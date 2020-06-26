#include <iostream>

using namespace std;

//  1. if else      2. switch case      3. conditional operator

// 1. if else
// if(condition)
// {
//      code ......
// }

// else
// {
//      code .......
// }

// int main()
// {

//     int a;

//     cout << "enter a no.";
//     cin >> a;

//     if (a < 5)
//     {
//         cout << "value is less than  5";
//     }

//     else if (a == 5)
//     {
//         cout << "value is equal too 5";
//     }

//     else
//     {
//         cout << "value is greater than 5";
//     }

//     return (1.1);
// }

//  question area

// 1=area of rectange
// 2=area of square
// 3=area of circle

//  all the data will be given by the user

int main()
{

    int choice;

    cout << "enter 1 for area of rectangle , 2 for square , 3 for circle";
    cin >> choice;

    if (choice == 1)
    {
        int l, b, area;
        cout << "enter length and breadth of rectangle";
        cin >> l >> b;
        area = l * b;
        cout << "Area of rectangle = " << area;
    }
    else if (choice == 2)
    {
        int side, area;
        cout << "enter side of square";
        cin >> side;
        area = side * side;
        cout << "Area of square = " << area;
    }

    else if (choice == 3)
    {
        int radius, area;
        cout << "enter length and breadth of rectangle";
        cin >> radius;
        area = 2 * 3.14 * radius * radius;
        cout << "Area of circle = " << area;
    }
    else
    {
        cout << "choose valid choice";
    }

    return (0);
}