/*
switch : menu  driven  program  . 

syntax :

switch(expression)
{
    case 1 : 
        statement
        break;
    default : 
        break;
}

*/

// ex :1  calculator  : 

#include <stdio.h>
int  main()
{
    int a,b,choice; 
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modulus\n");

    printf("enter your choice : \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("sum of two numbe is  : %d",(a+b)); 
            break;
        case 2:
            printf("sub of two numbe is  : %d",(a-b)); 
            break;
        case 3:
            printf("mul of two numbe is  : %d",(a*b)); 
            break;
        case 4:
            printf("div of two numbe is  : %d",(a/b)); 
            break;
        case 5:
            printf("modlus of two numbe is  : %d",(a%b)); 
            break;
        default : 
            printf("invalid choice");
            break;
    }
    return 0; 

}