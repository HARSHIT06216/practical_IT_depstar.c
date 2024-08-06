#include<stdio.h>
void main()
{
    int i,j,n,num;
    printf("\n enter the size of pattern:");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {num=1;
        for(j=1 ; j<=n ; j++)
        {

          if(i+j<n+1)

            {
                printf("  ");
            }
            else
            {
                printf(" %d",num++);
            }
        }

        printf("\n");
    }   printf("\n\n name: BALAR HARSHIT BHUPATBHAI");
        printf("\n ID: 24TCE0VO");
}

