/*
task :1 ask user  to enter the character and check  whether is it is  vowel  or  consonant   or  digit  or  special  character  using  switch.

*/

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

/*
task :2 ask user to enter the  number  and  print  1 jan  ==> days ==>31 
        2 feb  29 days 
            enter the year  : 2024 


*/