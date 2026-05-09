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
int a[5] = {1,2,3,4,5}; 
pos =3 ; 
ins =90; 
after insert  array : {1,2,3,90,4,5}
*/

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
