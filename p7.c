#include<stdio.h>
void main()
{
    long r_bunglow=12000000,r_plot=6000000,r_car=3000000,s_apartment=11000000,s_hotel=8000000,s_car=8000000,r_properties,s_properties;
    r_properties=r_bunglow+r_plot+r_car;
    s_properties=s_apartment+s_hotel+s_car;

    if(r_properties>s_properties)
    {
        printf("\n raman is more wealthier than suman");
    }
    else if(r_properties<s_properties)
    {
      printf("\n suman is more wealthier than raman");
    }
    else
    {
        printf("\n they both are equally wealthier");
    }

    printf("\n BALAR HARSHIT BHUPATBHAI");
    printf("\n student id: 24TCE0VO");
}
