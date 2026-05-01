/*
amg  : 153  ===> 3 digit 

each digit cube  : 1**1 5**3 3**3 ==> 1  125  27 ==> sum = 153
1634 : 4 digit 

each  digit power 4 : 1**4  6**4  3**4  4**4 ==>1 1296 81 256 ==> sum =1634 

logic : 1634 
    num > 0           0 > 0
       num = num /10  // num =0 
       count ++      // 4 

step : num > 0    0 > 0 
r = num %10  // r =1 %10 = 1 
sum =sum + pow(r,count)  // sum = 1634    
num = num /10  // num =0  
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int  num,r,temp,count =0,sum =0; 
    printf("Enter a number\n");
    scanf("%d",&num);  // 1634

    temp =num;  // temp =1634 
    for(;temp >0;)  // 1634 > 0 
    {
        temp = temp /10; 
        count ++;  // 4 
    }
    temp =num;  // temp = 1634
    for(; temp > 0;)
    {
        r= temp %10; 
        sum = sum + pow(r,count);
        temp = temp /10;
    }
    if(sum ==num)
    {
        printf("amg");
    }
    return 0;
}
*/ 

// ex :2  reverse number  : 
/*
input  : 123 
output : 321

logic :  rev = 0 
r= num %10 ;  // r =1 %10 =1 
rev = rev *10 +r // rev = 321  
num = num /10  // num =0  
*/
/*
#include<stdio.h>
int  main()
{
    int num,r,rev=0; 
    printf("Enter a number\n");
    scanf("%d",&num);  // 123
    for(; num >0;)
    {
        r = num %10;  // r =1 %10 =1
        rev = rev *10 +r;  // rev = 321
        num = num /10;  // num =0
    }
    printf("rev number is  : %d",rev);
    return 0;
}
*/ 
// pelindrome number  : 
/*
input : 121 131 141 

*/
// twin  : 
/*
123  : 
each digit sum: 1+2+3 ==> 6 
each multiply : 1*2*3 ==> 6
sum ==mul    ===> twin 
*/

/*
A number is said to be a Disarium number when the sum of its digit raised to the power of their respective positions 
becomes equal to the number itself.
For example, 175 is a Disarium number as follows:
11+ 72 + 53 = 1+ 49 + 125 = 175

A harshad number is a number that is divisible by the sum of its digits. E.g., the number 18 is a harshad number, because 
the sum of the digits 1 and 8 is 9 (1 + 8 = 9), and 18 is divisible by 9. 
*/