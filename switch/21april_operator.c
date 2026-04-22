/*
1. aithematic  : + - * / % 
2. relational : < > <= >= == !=
3. logic : && || !
4. assignment : = += -= *= /= %= <<= >>= 
5. increment : 
    pre inc :  ++a   pre dec : --a 
    post inc : a++   post dec : a--
6. bitwise : & | ^ ~ << >>
7. ternary : ? 
    syntax : it is  short form of  if else  
        if(condition)
            return true;
        else 
            return false;
    ternary : 
        con  ? true : false 
        
*/

#include <stdio.h>
int main()
{
    // int a=10,b=5;
    //a=a+b;    // a=a-b   a-=b  a=a*b   a*=b 
    //a+=b; 
    //printf("a value is  : %d\n",a); // 10 
    //printf("post inc a value  is  : %d\n",a++); //10  
    //printf("after post inc a value is  : %d\n",a); // 11
    
    // printf("a value is  : %d\n",a); // 10 
    // printf("pre inc a value  is  : %d\n",--a); //11  
    // printf("after pre inc a value is  : %d\n",a); // 11
    
    // (a>b) ? printf("a is greater than b\n") : printf("b is greater than a\n");

    // int a = 10, b = 80;
    // printf("%d", a || b);
    // printf("%d", a && b);

    int a = 3;
    printf("%d", a++ + a++);


    return 0; 
}