#include <iostream>
using namespace std;

//  array -> numerical array

//a[6]= [1,2,3,4,5,6]
// print a[0]

// int main()
// {

//     int a[10], i;

//     for (i = 0; i < 10; i++)
//     {
//         cout << "enter a number";
//         cin >> a[i];
//     }
//     for (i = 0; i < 10; i++)
//     {
//         cout << a[i] << endl;
//     }

//     return (0);
// }

//  calculate sum of all nos.
// int main()
// {

//     int a[10], i, sum = 0;

//     // a[] = [ 6, 7, 8, 9, 10 ];
//     // sum = sum+a[i];

//     // sum = 13  a[2]=8

//     for (i = 0; i < 10; i++)
//     {
//         cout << "enter a number";
//         cin >> a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         sum = sum + a[i];
//     }
//     cout << "Sum of all Nos. = " << sum;
//     return (0);
// }

// sorting methods: 1. selection sort 2. bubble sort

// bubble sort technique
// [2,10,6,4,20,25]
// [2,6,10,4,20,25]
// [2,4,10,6,20,25]
// [2,4,6,10,20,25]
int main()
{
    int a[10], i, j, t;

    for (i = 0; i < 10; i++)
    {
        cout << "enter a number";
        cin >> a[i];
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {

            if (a[j + 1] < a[j])
            {
                t = a[j + 1];
                a[j + 1] = a[j]; // t=2, a[j+1]=4, a[j]=2
                a[j] = t;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}