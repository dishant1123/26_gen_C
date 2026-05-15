/*
    string  : 
strlen  : length 
strupr  : upper case
strcat  : concatenate
strcmp  : compare
strcpy  : copy
strlwr  : lower case
strrev  : reverse
*/

// ex :1 
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]; 
    int result; 
    printf("enter the  string : \n"); 
    scanf(" %s",&s1);
    result = strlen(s1); 
    printf("length of the string is : %d\n",result);
    return 0; 

}
*/

// pointer  : 

/*
    memory address  store  
*/

// ex :1 
/*
#include<stdio.h>
int  main()
{
    int a=10; 
    int *p;    // pointer  decalaration  
    p = &a;    // pointer  intialization
    // int *p = &a ;   pointer decalration with initialization
    printf("a value  without using pointer  is  : %d\n",a);
    printf("using pointer  a value is  : %d\n",*p);
    printf(" a memory address  is : %p\n",p);  // 0061FF18

    return 0; 

}
*/

// ex :2 
/*
#include<stdio.h>
int  main()
{
    int a=90,b=10; 
    int *p = &a; 
    int *q = &b; 

    int c= *p + *q;  // 

    printf("c value is : %d\n",c);
    return 0; 
}
*/ 

// ex :3 array  with  pointer : 
/*
#include<stdio.h>
int  main()
{
    // int  a[5] = {1,2,3,4,5};  // int  *p = &a;  
    int a[50],n; 
    int *p=a; 
    // p =a; 
    printf("enter the number of elements : \n");
    scanf("%d",&n);
    printf("enter the 5 elements : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",p+i);
    }

    for(int i=0; i<n; i++)
    {
        // printf("%d\t",a[i]);
        printf("%d\t",*(p +i));
    }
    return 0; 
}
*/ 

// ex :4 structure  with  pointer :

#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float cgpa;
};

int  main()
{
    struct student s[2] ={{"hp",12,3.5},{"jay",13,3.6}};

    struct student *p =s;
    // printf("roll no  is : %d\n",s[0].roll);
    // printf("name is : %s\n",s[0].name);
    // printf("cgpa is : %f\n",s[0].cgpa);
    // printf("roll no  is : %d\n",s[1].roll);
    // printf("name is : %s\n",s[1].name);
    // printf("cgpa is : %f\n",s[1].cgpa);

    printf("rollno is  : %d\n",p->roll); 
    printf("name is : %s\n",p->name);   // ->  ===> errow function  
    printf("cgpa is : %f\n",p->cgpa);

    printf("rollno is  : %d\n",(p+1)->roll);
    printf("name is : %s\n",(p+1)->name);
    printf("cgpa is : %f\n",(p+1)->cgpa);

    return 0; 
}