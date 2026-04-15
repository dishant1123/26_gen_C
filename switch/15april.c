/*
task :1 ask user  to enter the character and check  whether is it is  vowel  or  consonant   or  digit  or  special  character  using  switch.

*/
/*
#include <stdio.h>
int  main()
{
    char ch; 
    printf("enter the  a character : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf("it is a vowel");
            break;
        default : 
            if(ch >'a' && ch <='z')
            {
                printf("it is a consonant");
            }
            else if(ch >='0' && ch <='9')
            {
                printf("it is a digit");
            }
            else 
            {
                printf("it is a special character");
            }
    }
    return 0; 
}
*/ 
/*
task :2 ask user to enter the  number  and  print  1 jan  ==> days ==>31 
        2 feb  29 days 
            enter the year  : 2024 

*/

// task :3 ask  user to enter the  number and  check it is even or  odd using switch.
/*
#include <stdio.h>
int  main()
{
    int  num; 
    printf("enter the number : ");
    scanf("%d",&num);
    switch(num %2)
    {
        case 0 :
            printf("it is even");
            break;
        case 1 :
            printf("it is odd");
            break;
    }

    return 0; 
}

*/

// nested switch  : 

/*
switch (expression)
{
    case 1 : 
        switch(expression)
        {
            case 1: 
        }
}
*/
/*
    hotel 
    1.fruits
        a. apple  b.banana c.mango d.kiwi 
    2.vegetables
        a. potato b.tomato c.onion d.cabbage
*/

#include <stdio.h>
int  main()
{
    int choice,subchoice,qty,total;
    printf("1.fruits\n");
    printf("2.vegetables\n");
    printf("enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
        {
            printf("you selected fruits\n");
            printf("1.apple : 90\n");
            printf("2.banana: 50\n");
            printf("3.mango : 900\n");
            printf("4.kiwi  : 200\n");
            printf("enter your subchoice : ");
            scanf("%d",&subchoice);
            switch(subchoice)
            {
                case 1 :
                    printf("apple");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 90*qty;
                    printf("total is : %d",total);
                    break;
                case 2 :
                    printf("banana");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 50*qty;
                    printf("total is : %d",total);
                    break;
                case 3 :
                    printf("mango");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 900*qty;
                    printf("total is : %d",total);
                    break;
                case 4 :
                    printf("kiwi");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 200*qty;
                    printf("total is : %d",total);
                    break;
            }
            break;
        }
        case 2 :
        {
            printf("you selected vegetables\n");
            printf("1.Potato : 90\n");
            printf("2.tomato : 50\n");
            printf("3.methi : 10\n");
            printf("4.cabbage :20\n");
            printf("enter your subchoice : ");
            scanf("%d",&subchoice);
            switch(subchoice)
            {
                case 1 :
                    printf("potato");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 90*qty;
                    printf("total is : %d",total);
                    break;
                case 2 :
                    printf("tomato");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 50*qty;
                    printf("total is : %d",total);
                    break;
                case 3 :
                    printf("methi");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 10*qty;
                    printf("total is : %d",total);
                    break;
                case 4 :
                    printf("cabbage");
                    printf("enter the qty : "); 
                    scanf("%d",&qty);
                    total = 20*qty;
                    printf("total is : %d",total);
                    break;
            }
            break;
        }
        default :
        { 
            printf("invalid choice");
            break;
        }

    }
    return 0;

}