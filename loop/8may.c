/*
pattern  : 

11.        12.          13 .          14.
* * * * *   * * * * *          *       * 
  * * * *    * * * *         * *      * * 
    * * *     * * *        * * *     * * * 
      * *      * *       * * * *    * * * *
        *       *      * * * * *   * * * * * 

*/

// ex :11 
/*
#include<stdio.h>
int main()
{
    int i,j,k; 

    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=1; k<i; k++) // 1   1<3 
        {
            printf("  ");
        }
        for(j=5; j>=i; j--) // 5   5 >=3
        {
            printf("* "); // * * * * * 
        }                 //   * * * * 
        printf("\n");    //      * * *
    }
    return 0;
}
*/
// ex :12
/*
#include<stdio.h>
int main()
{
    int i,j,k; 
    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=1; k<i; k++) // 1   1<3 
        {
            printf(" ");
        }
        for(j=5; j>=i; j--) // 5   5 >=3
        {
            printf("* "); // * * * * * 
        }                 //  * * * * 
        printf("\n");    //    * * *
    }
    return 0;
}
*/

// ex :13 
/*
#include<stdio.h>
int main()
{
    int i,j,k; 

    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=5; k>i; k--)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++) // 5   5 >=3
        {
            printf("* "); // * * * * * 
        }                 //   * * * * 
        printf("\n");    //      * * *
    }
    return 0;
}
*/ 
/*
// ex :14 
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
            printf("* "); // * * * * * 
        }                 //   * * * * 
        printf("\n");    //      * * *
    }
    return 0;
}
*/ 
// full peramid  : 

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
            printf("* "); // * * * * * 
        }                 //   * * * * 
        printf("\n");    //      * * *
    }
    for(i=1; i<=5; i++)  // 3   3<=5
    {
        for(k=1; k<i; k++) // 1   1<3 
        {
            printf(" ");
        }
        for(j=5; j>=i; j--) // 5   5 >=3
        {
            printf("* "); // * * * * * 
        }                 //  * * * * 
        printf("\n");    //    * * *
    }
    return 0;
}

/*
        1
       1 2 
      1 2 3 
     1 2 3 4
    1 2 3 4 5
     1 2 3 4
      1 2 3
       1 2
        1
*/