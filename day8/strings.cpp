#include <iostream>
#include <cstring>

using namespace std;
// pallindrome
// ex. mom , dad

// int main()
// {

//     char a[20], b[20];

//     cout << "enter a string";
//     gets(a);

//     strcpy(b, a);
//     puts(b);
//     puts(a);

//     strrev(a);
//     puts(a);

//     if (strcmp(a, b) == 0)
//     {
//         cout << "true";
//     }
//     else
//     {
//         cout << "false";
//     }
//     return (0);
// }

// find string has duplicated values or not
// ex. hello

// int main()
// {

//     char a[20];
//     int i, j, c = 0;
//     cout << "enter a string";
//     gets(a);

//     int l = strlen(a);

//     for (i = 0; i < l; i++)
//     {

//         for (j = i + 1; j < l; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 c = 1;
//             }
//         }
//     }
//     if (c == 1)
//     {
//         cout << "the string is duplicated";
//     }
//     else
//     {
//         cout << "the string is not duplicated";
//     }

//     return (0);
// }

//  anagrams
//  ex. cat act, pool loop

// int main()
// {

//     char a[20], b[20];
//     int i, j, choice = 0;

//     cout << "enter two string";
//     gets(a);
//     gets(b);

//     int la = strlen(a);
//     int lb = strlen(b); // cat act  choice=0  i=0  j=1

//     if (la == lb)
//     {
//         for (i = 0; i < la; i++)
//         {
//             choice = 0;
//             for (j = 0; j < lb; j++)
//             {
//                 if (a[i] == b[j])
//                 {

//                     choice = 1;
//                 }
//             }
//             if (choice != 1)
//             {
//                 cout << "the strings are not anagram";
//                 break;
//             }
//         }
//     }
//     else
//     {
//         cout << "the strings are not anagram";
//     }
//     if (choice == 1)
//     {
//         cout << "it is an anagram";
//     }

//     return (0);
// }

// *
// **
// ***
// ****

// int main()
// {

//     int i, j, row;
//     cout << "enter no. of rows";
//     cin >> row;

//     for (i = 1; i <= row; i++)
//     {

//         for (j = 1; j <= i; j++)
//         {

//             cout << "*";
//         }
//         cout << endl;
//     }

//     return (0);
// }

//   *
//  * *
// * * *

int main()
{

    int i, j, k, row;

    cout << "enter no. of rows";
    cin >> row;

    for (i = 1; i <= row; i++)
    {

        for (j = row - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return (0);
}
