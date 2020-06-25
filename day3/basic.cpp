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

int main()
{

    int a;

    cout << "enter a no.";
    cin >> a;

    if (a < 5)
    {
        cout << "value is less than  5";
    }

    else if (a == 5)
    {
        cout << "value is equal too 5";
    }

    else
    {
        cout << "value is greater than 5";
    }

    return (1.1);
}