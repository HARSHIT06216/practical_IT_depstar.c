#include<stdio.h>
void main()
{
    int i,j,n;
    printf("\n enter the size of pattern:");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {

          if(i>=j)
        {
            if(j%2==0)
            {
                printf(" 0 ");
            }
            else
            {
                printf("1");
            }
        }
        }
        printf("\n");
    }   printf("\n\n name: BALAR HARSHIT BHUPATBHAI");
        printf("\n ID: 24TCE0VO");
}
