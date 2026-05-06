/*
strong number  : 145  

each digit factorial  : 1  4  5  
                       1   24 120 
                    sum = 1+24+120 = 145     

*/
/*
#include<stdio.h>
int main()
{
    int num,r,temp,fact,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);  // 145

    temp =num;    // temp = 145

    for(;temp > 0; ) // 0 > 0 
    {
        r = temp %10;   // r =1 
        fact =1 ;      // fact = 1
        for(int i=1; i<=r; i++) // 1  1 <=1
        {
            fact = fact *i;  //fact = 1
        }
        sum =sum +fact;  // sum =145 
        temp = temp /10; // temp = 1 /10 =0
    }
    if(sum == num)
    {
        printf("strong number");
    }
    return 0; 
}
*/ 

// prime , reverse , perfect ,pelindrome , twin , disarium , harshad ,strong number  :
/*
#include<stdio.h>
int main()
{
    int start,end,i,j,count; 
    printf("Enter start and end\n");
    scanf("%d %d",&start,&end);  // 3 100
    
    for(i=start; i<=end; i++) // i=5   5 <=100
    {
        count =0 ;  // count = 0
        for(j=1; j<=i; j++) // 1  1 <=4
        {
            if(i % j==0)  // 3 % 3 ==0 
            {
                count ++;  // 2 
            }
        }// j  loop end
        if (count ==2) // 2==2 
        {
            printf("%d ",i); //3 
        }
    } // i loop end
    return 0; 
}
*/

// disarium number : 

#include<stdio.h>
#include<math.h>
int  main()
{
    int start,end,i,temp,sum ;
    printf("Enter start and end\n");
    scanf("%d %d",&start,&end);  

    for(i=start; i<=end; i++) // i = 103  `103 <=1000
    {
        temp = i;  // temp =103
        int count =0; 
        sum =0; 
        for(; temp > 0; ) // 0 > 0 
        {
            temp = temp /10;  // 0 
            count ++;  // 3  // 3
        }
        temp = i;   // temp =103 
        for(;temp > 0; ) // 0> 0
        {
            int r= temp %10; // r =1 
            sum = sum + pow(r,count); // sum = 10
            count --;  //0
            temp = temp /10 ;  // temp = 1/10 =0  
        }
        if(sum == i)
        {
            printf("%d\t",i);  // 103
        }
    } 
    return 0 ; 

}


