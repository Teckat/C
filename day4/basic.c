#include <stdio.h>

// loops
// 1. for loop   , 2. while loop  , 2. do while

//  1. for loop
//
// for(initialization; condition; increment/decrement);
// for(i=1;i<=10;i=i+1)
// {
// code
// }

// int main()
// {

//     int i;

//     for (i = 1; i <= 15; i = i + 2)
//     {
//         printf("%d \n", i);
//     }

//     return (0);
// }

// 2. while loop
//
// initialization;

// while(condition){
// code
// increment
// }

int main()
{

    int i = 1;

    while (i <= 15)
    {
        printf("%d \n", i);
        i++;
    }

    return (0);
}