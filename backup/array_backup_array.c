/*
array  : 

int  a[5] = {1,2,3,4,5};
        a[0] =1  , a[1] =2  .... 
*/

// ex  :1 
/*
#include<stdio.h>
int main()
{
    int a[40],num,i; 
    printf("enter the number of elements\n");
    scanf("%d",&num); 
    
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("array is \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0; 
}
*/

// update : 
/*
#include<stdio.h>
int main()
{
    int a[40],num,i; 
    printf("enter the number of elements\n");
    scanf("%d",&num); 
    
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("array is \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t",a[i]);  //a[5] ={1,2,3,4,5} 
    }
    int pos,value;
    printf("enter the position\n");
    scanf("%d",&pos);// 3 
    printf("enter the new value\n");
    scanf("%d",&value);  // 40
    a[pos] =value;    //   a[3]=40 

    printf("after update  array element is  : \n"); 
    for(i=0; i<num; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0; 
}
*/

// insert : 
/*
int a[5] = {1,2,3,4,5};  //4
pos =3 ; 
ins =90; 
after insert  array : {1,2,3,90,4,5}
*/
/*
#include<stdio.h>
int main()
{
    int a[40],num,i; 
    printf("enter the number of elements\n");
    scanf("%d",&num);  // 5 
    
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("array is \n");
    for(i=0; i<num; i++)
    {                         //       0   1  2  3    4  5
        printf("%d\t",a[i]);  //a[5] ={10, 20,30,400  40,50} 

    }
    int pos,ins;
    printf("enter the position\n");
    scanf("%d",&pos);// 3 
    printf("enter the  element  you want  to insert : \n");
    scanf("%d",&ins);  // 400
    
    for(i=num; i>pos; i--) // i= 3  3 > 3 
    {
        a[i] =a[i-1];  // a[4]  = a[3]
    }
    a[pos] = ins;   //  a[3] = 400
    num++;

    printf("after insert  array element is  : \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0; 
}
*/ 

// bubble sort : 

/*
a[5] = {1,6,2,5,3};  
*/
/*
#include<stdio.h>
int  main()
{
    int a[40],num,i; 
    printf("enter the number of elements\n");
    scanf("%d",&num);  // 5 
    
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("\narray is \n");
    for(i=0; i<num; i++)
    {                         //       0   1  2  3   4  
        printf("%d\t",a[i]);  // a[5] ={1, 4, 3, 2,  5}
    }

    for(i=0; i<num-1; i++) // i=1  1 <4  
    {
        for(int j=i+1; j<num; j++) // j=2  2 <5 
        {
            if(a[i] > a[j]) // a[1] > a[2]     4 > 3
            {
                int temp = a[i];  // temp = a[1] temp =4
                a[i] = a[j];      // a[1] = a[2] a[1] = 3
                a[j] = temp;      // a[2] = 4    a[2] =4
            }
        }                          // 1 3 4 2 ,5 
    }
    printf("\nafter bubble sort  array element is  : \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0; 
}

*/
/*
#include<stdio.h>
int  main()
{
    int a[30][30],i,j,row,col;
    printf("enter the number of rows and columns\n");
    scanf("%d %d",&row,&col);  // 3 3 

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix  is \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0; 
    
}
*/ 

/*
for : 

for(intial ; con ; inc/dec)
*/

// ex :1 1 -100
/*
#include<stdio.h>
int  main()
{
    int i,num ;
    printf("enter the number : \n");
    scanf("%d",&num); 

    for(i=1; i<=num; i++)
    {
        printf("%d\t",i);
    }
    return 0; 
}
*/ 
//  ex :2 
/*
#include<stdio.h>
int  main()
{
    int i,num ,sum=0;
    printf("enter the number : \n");
    scanf("%d",&num);  // 5 

    for(i=1; i<=num; i++) // 6  6 <=5  
    {
        sum =sum +i;  // sum =15
    }
    printf("sum is : %d",sum);  // 15
    return 0; 
}
*/

// while  : 
/*

for (in ; con ; inc/dec)

int 
while(con)
{
    printf(); 
    inc/dec
}
*/

#include<stdio.h>
int main()
{
    int i=1; 
    while(i<=100)
    {
        printf("%d\t",i);
        i++; 
    }
    return 0; 
}
