
#include<stdio.h>
void main()
{
    int i,j,a,b,num=1;
    printf("enter size of table vertically :");
    scanf("%d",&a);
    printf("enter size of table horizantally :");
    scanf("%d",&b);
    printf("\n multiplication table : %d * %d",a,b);
    for(i=1 ; i<=a ; i++)
    {
        printf("\n");
        for(j=1 ; j<=b ; j++)
        {
          printf("%4d",i*j);
        }
    }
    printf("\n\n name: BALAR HARSHIT BHUPATBHAI");
    printf("\n ID: 24TCE0VO");
}
