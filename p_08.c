#include<stdio.h>
void main()
{
   int Burger=0,Pizza=0,Pasta=0,Sandwich=0, FrenchFries=0,Option=1;
   while(Option!=0)
   {
        printf("\n YOUR MENUE");
        printf("\n---------------------");
        printf("\n|1|Burger       - 150");
        printf("\n|2|Pizza        - 200");
        printf("\n|3|Pasta        - 120");
        printf("\n|4|Sandwich     - 100");
        printf("\n|5|FrenchFries  - 80");
        printf("\n---------------------");
        printf("\n|0|if you not ordere any ONE type 0");
        printf("\n\n choose one of theme :");
        scanf("%d",&Option);
       if(Option!=0)
       {
           switch(Option)
           {
                case 1:
                printf("\n Burger is just 150 rupees.");
                Burger+=150;
                break;
                case 2:
                printf("\n Pizza is just 200 rupees.");
                Pizza+=200;
                break;
                case 3:
                printf("\n Pasta is just 120 rupees.");
                Pasta+=120;
                break;
                case 4:
                printf("\n Sandwich is just 100 rupees.");
                Sandwich+=100;
                break;
                case 5:
                printf("\n FrenchFries is just 80 rupees.");
                FrenchFries+=80;
                break;
           }
       }
   }
   printf("\n Your total amount is : %d",Burger+Pizza+Pasta+Sandwich+FrenchFries);

    printf("\n\n Name : BALAR HARSHIT BHUPATBHAI");
    printf("\n Student I'D : 24TCE0VO");
}
