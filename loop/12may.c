/*
1.          2.          3.
* * * * *   *           * * * * * 
*       *   * *         *     * 
*       *   *   *       *   *
*       *   *     *     * *
* * * * *   * * * * *   *
*/

// ex :1 
/*
#include<stdio.h>
int  main()
{
    int  i,j; 
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1 || j==1 || i==5 || j==5)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
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
    int  i,j; 
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==5 || j==1 || i==j)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
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
    int  i,j; 
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            if(i==1 || j==1 || i==j  || j==5)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0; 
}
*/

/* 
4.          5.           6.          7. 
* * * * *   * * * * *           *          * 
  *     *    *     *          * *         * * 
   *    *     *   *         *   *        *   *
     *  *      * *        *     *       *     *
        *       *       * * * * *      * * * * * 
*/

// ex :4 
/*
#include<stdio.h>
int main()
{
    int i,j,k; 
    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=1; k<i; k++)
        {
            printf("  ");
        }
        for(j=5; j>=i; j--) // 5   5 >=3
        {
            if(i==1 || j==5 || i==j )
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");    
    }
    return 0; 
}
*/

// ex :5 
/*
#include<stdio.h>
int main()
{
    int i,j,k; 
    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=5; j>=i; j--) // 5   5 >=3
        {
            if(i==1 || j==5 || i==j )
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");    
    }
    return 0; 
}
*/ 
// ex :7 
/*
#include<stdio.h>
int main()
{
    int i,j,k; 
    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=5; k>i; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++) // 5   5 >=3
        {
            if(i==1 || j==5 || i==j  || j==1 || i==5)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");    
    }
    return 0; 
}
*/ 
// full peramid  :

#include<stdio.h>
int main()
{
    int i,j,k; 
    for(i=1; i<=4; i++)  // 3   3<=5
    {
        for(k=5; k>i; k--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++) // 5   5 >=3
        {
            if(i==1 || j==5 || i==j  || j==1 || i==5)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");    
    }
    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=5; j>=i; j--) // 5   5 >=3
        {
            if(i==1 || j==5 || i==j )
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");    
    }
    return 0; 
}