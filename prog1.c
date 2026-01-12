/*payroll program which reads employee id,hours worked ,and rate of pay and computes the weekly pay*/
#include<stdio.h>
int main()
{
    int id,numemp=0;
    double hrs,rate,pay;
    printf("enter the id ,hours worked and rate of pay \n");
    printf("enter id number");
    scanf("%d",&id);
    while(id!=-11)
    {
        printf("enter the hours worked:\n");
        scanf("%lf",&hrs);
        printf("enter the rate:\n");
        scanf("%lf",&rate);
        pay=hrs*rate;
        printf("employee %d worked %.1f hours",id,hrs);
        printf("at a rate of $%.2f ,earning $%.2f\n\n",rate,pay);
        numemp++;
        printf("enter an id number;enter -11 to stop\n");
        scanf("%d",&id);

    }
    printf("we have processed %d employees\n",numemp);
}