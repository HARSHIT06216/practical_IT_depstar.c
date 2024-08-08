#include<stdio.h>
void main()
{
    int a[24],i,even=0,odd=0,s_n=0,s_p=0,s_even=0,s_odd=0,n;
    printf("enter size of arrays: ");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        printf("\n enter array: a[%d]=",i);
        scanf("%d",&a[i]);

    }
    for(i=0 ; i<n ; i++)
    {
        if(a[i]>0)
        {
            s_p++;
            if(a[i]%2==0)
            {
                s_even++;


            }
            else
            {
                s_odd++;

            }

        }
        else
        {
            s_n++;
            if(a[i]%2==0)
            {
                s_even++;

            }
            else
            {
                s_odd++;

            }
        }
    }

                printf("\n total number of even arrays : %d",s_even);
                printf("\n total number of odd arrays : %d",s_odd);
                printf("\n total number of nagetive arrays : %d",s_n);
                printf("\n total number of positive arrays : %d",s_p);



        printf("\n\n\n name:BALAR HARSHIT BHUPATBHAI.");
        printf("\n I'D : 24TCE0VO");


}
