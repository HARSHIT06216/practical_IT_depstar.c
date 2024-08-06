#include<stdio.h>
void main()
{
    int i,j,n,c;
    printf("enter rows:");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    { c=64;
      for(j=1 ; j<=(n*2)-1 ; j++)
     {
         if(i+j<n+1)
          {
              printf("   ");
          }
           else
           {
                 if(j>=n+i)
                 {
                     printf("   ");
                 }
                 else
                 {
                     if (j<=n)
                     {printf(" %c ",++c);}
                  else
                 {
                     printf(" %c ",--c);
                 }
           }

     }
     }printf("\n");
}   printf("\n\n name : BALAR HARSHIT BHUPATBHAI");
    printf("\n I'D : 24TCE0VO ");
}
