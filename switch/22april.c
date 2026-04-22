/*
goto function  : 
*/

#include <stdio.h>
int  main()
{
    int choice, subchoice,qty,cont, total=0,grand_total=0; 

    start : 
        printf("1.fruits\n");
        printf("2.vegetables\n");
        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : 
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
                        total =90; 
                        break; 
                    case 2 : 
                        total =50; 
                        break; 
                    case 3 : 
                        total =900; 
                        break; 
                    case 4 : 
                        total =200; 
                        break; 
                    default : 
                        printf("invalid choice\n");
                    goto start;
                }
                printf("enter the  qty   : "); 
                scanf("%d",&qty);
                grand_total += total*qty;
                break;
            case 2 :
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
                        total =90; 
                        break; 
                    case 2 : 
                        total =50; 
                        break; 
                    case 3 : 
                        total =10; 
                        break; 
                    case 4 : 
                        total =20; 
                        break; 
                    default : 
                        printf("invalid choice\n");
                    goto start;
                }
                printf("enter the  qty   : "); 
                scanf("%d",&qty);
                grand_total += total*qty;
                break;
                

            default :
                printf("invalid choice\n");
                goto start;
        }
        printf("do you  want to continue  :");
        scanf("%d",&cont);
        if(cont ==1)
        {
            goto start;
        }
        printf("grand total is : %d",grand_total);

        return 0; 
}