#include<stdio.h>
void main()
{
    int m=21,u,c;
    printf("\n total matchstick is : %d",m);
    while(1)
    {


        printf("\n choose one of them: ");
        scanf("%d",&u);
        if(u>4 || u<0)
        {
            printf("\n invalid input.");
           continue;
        }

            m=m-u;

            printf("\n number of matchsticks left=%d",m);

            c=5-u;
            printf("\n out of %d computer picked up %d",m,c);

            m=m-c;

            if(m==1)
            {
                printf("\n number of matchstick left=%d",m);
                printf("\n you lost the game");
                break;
            }


    }
              printf("\n\n name: BALAR HARSHIT BHUPATBHAI");
              printf("\n ID: 24TCE0VO");

}





