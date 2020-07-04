#include <iostream>

using namespace std;

//  play with matrices
// 1. upper triangular matrix 2. Lower triangular matrix 3. diagonal matrix 4. symmetric matrix

//  1. upper triangular matrix
// ij 0 1 2
// 0 [1 2 3]
// 1 [* 7 4]
// 2 [* * 9]

// int main()
// {
//     int i, j, a[3][3];

//     for (i = 0; i < 3; i++)
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
//             cout << a[i][j];
//         }
//         cout << endl;
//     }

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (j < i)
//             {
//                 cout << a[i][j];
//             }
//         }
//         cout << endl;
//     }

//     return (0);
// }

// 2. lower triangular matrix
// ij 0 1 2
// 0 [1 * *]
// 1 [8 7 *]
// 2 [9 4 9]

// int main()
// {
//     int i, j, a[3][3];

//     for (i = 0; i < 3; i++)
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
//             cout << a[i][j];
//         }
//         cout << endl;
//     }

//     cout << endl;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (j > i)
//             {
//                 cout << a[i][j];
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return (0);
// }

// 3. diagonal matrix
// ij 0 1 2
// 0 [1 5 4]
// 1 [8 7 8]
// 2 [9 4 9]

// int main()
// {
//     int i, j, a[100][100], c;

//     cout << "enter row or column value";
//     cin >> c;

//     for (i = 0; i < c; i++)
//     {
//         for (j = 0; j < c; j++)
//         {

//             cout << "enter a number";
//             cin >> a[i][j];
//         }
//     }
//     for (i = 0; i < c; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             cout << a[i][j];
//         }
//         cout << endl;
//     }

//     cout << endl;
//     for (i = 0; i < c; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             if (j == i)
//             {
//                 cout << a[i][j];
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return (0);
// }

// 4. symmetric matrix = aT =a

//  ex. Asymmetric matrix
// matrix -a
// ij 0 1 2
// 0 [1 5 4]
// 1 [8 7 8]
// 2 [9 4 9]

// matrix - aT
// ij 0 1 2
// 0 [1 8 9]
// 1 [5 7 4]
// 2 [4 8 9]

//  ex - symmetric matrix
// matrix -a
// ij 0 1 2
// 0 [1 5 4]
// 1 [5 7 8]
// 2 [4 8 9]

// matrix - aT
// ij 0 1 2
// 0 [1 5 4]
// 1 [5 7 8]
// 2 [4 8 9]

int main()
{

    int i, j, a[3][3], c = 0;

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

            if (a[i][j] != a[j][i])
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            cout << "matrix is Asymmetric";
            break;
        }
    }

    if (c == 0)
    {
        cout << "matrix is symmetric";
    }

    return (0);
}