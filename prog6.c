/*read series of numbers and it contain decimal places and 
checking for +ve or -ve or zero and also resulting respected count*/
#include<stdio.h>
int main()
{
    float i;
    int pos=0,neg=0,zero=0;
    printf("enter a number:\n");
    scanf("%f",&i);
    while(i!=11)
    {
    if(i>0)
    {
        printf("positive number\n");
        pos++;
    }
    else if(i<0)
    {
        printf("negative number\n");
        neg++;
    }
    else if(i==0)
    {
        printf("zero\n");
        zero++;
    }
    else{
        printf("enter valid number\n");
    }
    printf("enter a number if end enter 11\n");
    scanf("%f",&i);
    }
    printf("positive: %d \tnegative: %d \t zero: %d",pos,neg,zero);
}