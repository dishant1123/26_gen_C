/*
pattern : 

1.         2.         3.         4.         5.         6.
* * * * *  *          * * * * *  1          5 4 3 2 1  1 2 3 4 5
* * * * *  * *        * * * *    1 2        5 4 3 2    1 2 3 4 
* * * * *  * * *      * * *      1 2 3      5 4 3      1 2 3 
* * * * *  * * * *    * *        1 2 3 4    5 4        1 2 
* * * * *  * * * * *  *          1 2 3 4 5  5          1
*/

// ex :1 
/*
#include<stdio.h>
int  main()
{
    int i,j; 
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }   
    return 0; 
}
*/

// ex :2 
/*
#include<stdio.h>
int  main()
{
    int i,j; 
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }   
    return 0; 
}
*/ 
// ex :3 
/*
#include<stdio.h>
int  main()
{
    int i,j; 
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }   
    return 0; 
}
*/ 
/*
7.         8.         9.           10 . 
a          1          e d c b a    a b c d e 
a b        2 2        e d c b      a b c d 
a b c      3 3 3      e d c        a b c 
a b c d    4 4 4 4    e b          a b 
a b c d e  5 5 5 5 5  e            a
*/

// ex :7 

#include<stdio.h>
int  main()
{
    int i,j; 
    char ch; 
    for(i=1; i<=5; i++)  // 2  2<=5 
    {
        ch ='a';    // a 
        for(j=1; j<=i; j++) // 2 2  <=2 
        {
            printf("%c ",ch); // a 
            ch++;            //  a b   
        }
        printf("\n");
    }
    return 0 ;
}