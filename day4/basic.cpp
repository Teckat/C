#include <iostream>

using namespace std;

int main()
{

    int choice;
    char cont = 'y';

    while (cont == 'y')
    {
        cout << "enter 1 for area of rectangle , 2 for square , 3 for circle";
        cin >> choice;

        if (choice == 1)
        {
            int l, b, area;
            cout << "enter length and breadth of rectangle";
            cin >> l >> b;
            area = l * b;
            cout << "Area of rectangle = " << area << endl;
        }
        else if (choice == 2)
        {
            int side, area;
            cout << "enter side of square";
            cin >> side;
            area = side * side;
            cout << "Area of square = " << area << endl;
        }

        else if (choice == 3)
        {
            int radius, area;
            cout << "enter radius of circle";
            cin >> radius;
            area = 2 * 3.14 * radius * radius;
            cout << "Area of circle = " << area << endl;
        }
        else
        {
            cout << "choose valid choice" << endl;
        }

        cout << "press y to continue and x to stop" << endl;
        cin >> cont;
    }

    return (0);
}