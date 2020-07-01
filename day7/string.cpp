#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

//  Strings -> set of characters
//  amar, nsasfj

// int main()
// {

//     char a[100];
//     int i;

//     cout << "enter a string";
//     gets(a);

//     // using for loop
//     // for (i = 0; i < 10; i++)
//     // {
//     //     cout << a[i];
//     // }

//     //  puts

//     puts(a);

//     return (0);
// }

//  length of a string

// int main()
// {

//     char a[20];

//     cout << "enter a string";
//     gets(a);

//     int l = strlen(a);
//     cout << "the length is " << l << endl;

//     puts(a);

//     return (0);
// }

//  changing cases

// int main()
// {

//     char a[20], b[20];
//     int i;
//     cout << "enter a string";
//     gets(a);

//     int l = strlen(a);

//     // first method

//     // for (i = 0; i < l; i++)
//     // {

//     //     if (a[i] >= 'A' && a[i] <= 'Z')
//     //     {
//     //         a[i] = char(a[i] + 32);
//     //     }
//     // }

//     // second method

//     for (i = 0; i < l; i++)
//     {

//         a[i] = toupper(a[i]);
//         b[i] = tolower(a[i]);
//     }

//     puts(a);
//     puts(b);

//     return (0);
// }

// counting words
//  welcome to teckat webinar series
// words - 5
// spaces - 4

// int main()
// {

//     char a[100];
//     int count = 0, i;
//     cout << "enter a string";
//     gets(a);

//     int l = strlen(a);

//     for (i = 0; i < l; i++)
//     {
//         if (a[i] == ' ')
//         {
//             count++;
//         }
//     }
//     int b = count + 1;
//     cout << "total words = " << b;
//     return (0);
// }

// a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E'

//  reversing string

void strrev1(char a[])
{
    char b[20];
    int i, c = 0;
    int l = strlen(a);
    for (i = l - 1; i >= 0; i--)
    {
        b[c] = a[i];
        c++;
    }
    puts(b);
}

int main()
{

    char a[20];
    int i;
    cout << "enter a string";
    gets(a);

    strrev1(a);

    return (0);
}