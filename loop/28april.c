/*
loop  : iteration  ===> repeations 

3 type  : 
1. for    : entry  control  loop 
2. while  : entry  control  loop
3. do while  : exit  control  loop
========================================================================================================================================================================================================================
for : 
    syntax : for(initialization/start; condition; inc/dec)

*/

//ex :1  1-100 ; 
/*
#include <stdio.h>
int  main()
{
    int i ; 
    for(i=1; i<=100; i++)  // i =101  101 <=100 
    {
        printf("%d\t",i) ;  //  1 2 .. 100 
    }
    return 0 ; 
}
*/ 
// if i print  i value in  outside the loop then  i value is  100 or 101 ? 

// ex :2 100 -1 
/*
#include <stdio.h>
int  main()
{
    int i ; 
    for(i=100; i>=1; i--)  // i =101  101 <=100 
    {
        printf("%d\t",i) ;  //  1 2 .. 100 
    }
    return 0 ; 
}
*/
// ex : 3 print  odd number between  1 and 100
/*
#include <stdio.h>
int  main()
{
    int i ; 
    for(i=0; i<=100; i+=2)  // i =101  101 <=100 
    {
        printf("%d\t",i) ;  //  1 2 .. 100 
    }
    return 0 ; 
}
*/
// ex :4 print  a to z using  loop. 

// ex :5 ask user  to enter the  number  and  print that  number in  loop.
/*
#include <stdio.h>
int  main()
{
    int num,i; 
    printf("enter the number : ") ;
    scanf("%d",&num) ;
    for(i=0; i<=num; i+=2)
    {
        printf("%d\t",i) ;  //  1 2 .. 100
    }
    return 0; 
}
*/ 

// task :6 ask user  to enter the  number and  print  n natural  number sum. 

/*
input : 5    ===> 1+2+3+4+5 =15 
*/

#include <stdio.h>
int main()
{
    int num , i ,sum =0 ; 
    printf("enter the number : ") ;
    scanf("%d",&num) ;  //5 
    for(i=1; i<=num; i++) // 6 6<=5 
    {
        sum =sum +i;   // sum = 15
    }
    printf("sum is %d",sum) ;
    return 0 ; 
}

// task :7 ask user  to enter the  number and  print  n natural  number even sum and  oddsum.
/*
input  : 10 
        even :2 4 6 8 10  ===>30 
        odd  : 1 3 5 7 9  ===>25        
*/
