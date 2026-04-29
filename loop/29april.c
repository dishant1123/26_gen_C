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

/*
    armstrong  number  : 
153 : 3 digit 

    each cube   ==> 1**3   5**3  3**3  ==> 1  125 27  ==> sum = 1+125+27 = 153 
    
370  : 3 digit 
     each cube   ==>   3**3  7**3 0**0  ==> 27  343 0   ==> sum = 27+343+0 = 370

3 step  : 
 
r = num %10  // r =1 %10 = 1 
sum = sum + (r*r*r)  // sum = 153   
num = num /10;  num = 1 /10 = 0 


*/
#include<stdio.h>
int main()
{
    int num,r,temp,sum=0; 
    printf("Enter a number\n");
    scanf("%d",&num);   //153 
    temp =num; 
    for(;temp > 0;)  //0 > 0 
    {
        r = temp %10;  // r =1 
        sum =sum + (r*r*r);  // sum = 153 
        temp = temp /10;  // temp = 1 /10 = 0
    }
    if(sum ==num)
    {   
        printf("%d is a armstrong number",num);
    }
    return 0; 
}

