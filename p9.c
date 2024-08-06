#include<stdio.h>
void main()
{
    int marks;
    printf("\n enter marks between 0 to 100 : ");
    scanf("%d",&marks);
   if(marks>=0 && marks<=100)
   {
       (marks>=90)? printf("\n CONGRATULATIONS you got A grade."):
       (marks>=80)? printf("\n you got B grade."):
       (marks>=70)? printf("\n you got C grade."):
       (marks>=60)? printf("\n you got D grade."):
        printf("\n you got F grade.");


   }

   else {printf("entered input is invalid ");}

        printf("\n\n name: BALAR HARSHIT BHUPATBHAI");
        printf("\n ID: 24TCE0VO");

}
