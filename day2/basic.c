#include <stdio.h>

//  2. relational operators
//    == -> equal to
//    >  -> grater than
//    <  -> less than
//    != -> not equal to
//    >=  -> greater than equal to
//    <=  -> less than equal to

// int main()
// {

//     int a = 10, b = 10;

//     printf(" a==b -> %d \n", a == b);
//     printf(" a>b -> %d \n", a > b);
//     printf(" a<b -> %d \n", a < b);
//     printf(" a!=b -> %d  \n", a != b);
//     printf(" a>=b -> %d \n", a >= b);
//     printf(" a<=b -> %d \n", a <= b);
//     return (0);
// }

// 3. Logical operators
//   && -> Logical AND
//   || -> Logical operators
//    ! -> Logical NOT

int main()
{

    int a = 0, b = 12;

    printf("AND-> a==b && a<10 -> %d \n", a == b && a < 10);
    printf("OR->  a==b || a<10 -> %d \n", a == b || a < 10);
    printf("NOT -> !0 -> %d", !a);
    return (0);
}