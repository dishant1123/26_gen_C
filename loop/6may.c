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