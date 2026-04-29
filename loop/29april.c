/*
prime  : 2 factors   ===> 1 , number itself  

6 factors  : 1,2,3,6   ==> 4   ===> not  prime  
7 factors  : 1,7  ==> prime 
19 factors : 1,19   ===> prime 
99  factors : 1 , 11 , 9 ,99  ==> not prime

*/
/*
#include<stdio.h>
int main()
{
    int num,i,count =0 ; 
    printf("Enter a number\n");
    scanf("%d",&num);  // 4 

    for(i=1; i<=num; i++) // 4  4<=4 
    {
        if(num % i==0)   // 4 % 4 ==0 
        {
            count ++;  //   3
        }
    }
    if(count==2) // 3 ==2 
    {
        printf("%d is a prime number",num);
    }
    return 0 ;
}
*/ 
// perfect number  : 
/*
    6 factors : 1,2,3,6   ===> sum = 1+2+3 = 6
    28 factors : 1,2,4,7,14,28   ===> sum = 1+2+4+7+14 =28 
    100 factors : 1,2,4,5,10,20,25,50,100  ==> sum = 1+2+4+5+10+20+25+50 = 117  

    sum == num 
*/
