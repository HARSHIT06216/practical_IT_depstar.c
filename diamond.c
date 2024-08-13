#include<stdio.h>
void main()
{
    int i,j,n;
    printf("\n enter number of rows : ");
    scanf("%d",&n);
    for(i=1 ; i<n*2-1 ; i++)
    {
        for(j=1 ; j<n+1 ; j++)
        {
            if(i<=n)
            {
                if(i+j>=n+1 && j<=i)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            else
            {
                if(i+j<=n+2*j-1 && i+j<=n*2)
                {
                    printf(" * ");
                }
                else
                    {
                        printf("   ");
                    }
            }
        }
        printf("\n");
    }
    printf("\n\n name: BALAR HARSHIT BHUPATBHAI");
    printf("\n I'D : 24TCE0VO");
}
