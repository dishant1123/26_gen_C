/*
structure  :  group  of variable  with same type. 

int  a[5] = {1,2,3,4,5}

struct name 
{
    data typr with variable name;
};

ex : 
(int)   (str) (int) (str)
srno   name   age  clg 
1.     aagam   20  LJ 
2.     vishwa  18  GLS 
*/

// ex :1 
/*
#include<stdio.h>
struct student 
{
    int srno,age; 
    char name[90],clg[90]; 
};
int  main()
{
    struct  student s[2] ={{1,20,"aagam","LJ"},{2,18,"vishwa","GLS"}};

    printf("srno  : %d\n",s[0].srno);
    printf("name  :%s\n",s[0].name);
    printf("age   :%d\n",s[0].age);
    printf("clg   :%s\n",s[0].clg);

    printf("%d\n",s[1].srno);
    printf("%s\n",s[1].name);
    printf("%d\n",s[1].age);
    printf("%s\n",s[1].clg);

    return 0; 
}
*/

// ex :2  structure with array
/*
#include<stdio.h>
struct student
{
    int srno,age;
    char name[90],clg[90];
}s[3]; 

int main()
{
    // struct student s[3]; 
    int i; 
    for(i=1; i<=3; i++)
    {
        printf("enter the  srno : ");
        scanf("%d",&s[i].srno); 
        printf("enter the  name : ");
        scanf("%s",&s[i].name);
        printf("enter the  age : ");
        scanf("%d",&s[i].age);
        printf("enter the  clg : ");
        scanf("%s",&s[i].clg);
    }
    printf("srno\tname\tage\tclg\n");
    for(i=1; i<=3; i++)
    {
        printf("%d\t%s\t%d\t%s\n",s[i].srno,s[i].name,s[i].age,s[i].clg);
    }
    return 0; 
}
*/ 
// ex : 3 structure  with  function : 

#include<stdio.h>
struct student
{
    int srno,age;
    char name[90],clg[90];
}s[3]; 

void input_student(struct student s[])
{
    int  i; 
    for(i=1; i<=3; i++)
    {
        printf("enter the  srno : ");
        scanf("%d",&s[i].srno); 
        printf("enter the  name : ");
        scanf("%s",&s[i].name);
        printf("enter the  age : ");
        scanf("%d",&s[i].age);
        printf("enter the  clg : ");
        scanf("%s",&s[i].clg);
    
    }
}
void display_student(struct student s[])
{
    int i; 
    printf("srno\tname\tage\tclg\n");
    for(i=1; i<=3; i++)
    {
        printf("%d\t%s\t%d\t%s\n",s[i].srno,s[i].name,s[i].age,s[i].clg);
    }
}

int  main()
{
    struct student s[3];

    input_student(s); 
    display_student(s);
    return 0; 
}

/*
struct bank   

srno     name     accnum     balance
1.       aagam    123456789  2000
2.       vishwa   987654321  200
3.       aakash   876543210  3000
4.       aksh     765432109  400

condition : 
1.print  only  those  customer  name  who's balance  is  more than  500. 

    for()
2.who's balance is  less than 500  add 1000 rs in their balance  and  print  update  balance with name.
    name     update_balance 
    vishwa     1200
    aksh       1400

*/

