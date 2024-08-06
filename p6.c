#include<stdio.h>
void main()
{
    int a,b;
    char option;
    printf("enter a first number");
    scanf("%d",&a);
    printf("enter a second number");
    scanf("%d",&b);

    printf("\n addition 1|+|");
    printf("\n subtraction 2|-|");
    printf("\n multiplication 3|*|");
    printf("\n devide 4|/|");

    printf("\n choose one of them :");
    fflush(stdin);
    scanf("%c",&option);
    switch(option)
    {
        case'+':
        printf("\n addition=%d",a+b);
        break;
        case'-':
        printf("\n subtraction=%d",a-b);
        break;
        case'*':
        printf("\n multiplication=%d",a*b);
        break;
        case'/':
            printf("\n devide=%d",a/b);
            break;




    }
    printf("\n\n name: BALAR HARSHIT BHUPATBHAI");
        printf("\n ID: 24TCE0VO");
}
