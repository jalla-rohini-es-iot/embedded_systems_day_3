/*read and print absolute values for both +ve and -ve and if it 0 then it is end of the data*/
#include<stdio.h>
#include<math.h>
int main()
{
    float i;
    float ans;
    printf("enter input\n");
    printf("number\tabsolute value\n");
    scanf("%f",&i);
    while(i!=0)
    {
        ans=fabs(i);
        printf("%f\t%f\n",i,ans);
        printf("enter input if it end enter 0\n");
        scanf("%f",&i);
    }

}