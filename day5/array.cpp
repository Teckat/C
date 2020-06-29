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
// int main()
// {
//     int a[10], i, j, t;

//     for (i = 0; i < 10; i++)
//     {
//         cout << "enter a number";
//         cin >> a[i];
//     }

//     for (i = 0; i < 10; i++)
//     {
//         for (j = 0; j < 9; j++)
//         {

//             if (a[j + 1] < a[j])
//             {
//                 t = a[j + 1];
//                 a[j + 1] = a[j]; // t=2, a[j+1]=4, a[j]=2
//                 a[j] = t;
//             }
//         }
//     }

//     for (i = 0; i < 10; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

//  two-dimensional array :-
//    0 1
// 0 [1 3]
// 1 [1 4]
//
// [0][0]

//     0  1  2
//  0 [1  5  7 ] \n
//  1 [        ]
//  2 [        ]

// int main()
// {

//     int a[3][3], i, j;

//     for (i = 0; i < 3; i++) // i=2       j=0     a[1][2]
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << "enter a number";
//             cin >> a[i][j];
//         }
//     }

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return (0);
// }

// sum of dda

int main()
{

    int a[3][3], i, j, sum = 0, sumRow = 0;

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            cout << "enter a number";
            cin >> a[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sumRow = sumRow + a[i][j];
            sum = sum + a[i][j];
        }
        cout << " the " << i + 1 << " row value" << sumRow << endl;
        sumRow = 0;
    }

    cout << "sum of all nos. " << sum;

    return (0);
}
