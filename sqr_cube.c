/*reading input data from the user and printing number ,square and cube until user enter 0 as the end of the input*/
#include<stdio.h>
int main()
{
    int i,sqr,cube;
    printf("number\tsquare\tcube\n\n");
    scanf("%d",&i);
    while(i>0)
    {
        sqr=i*i;
        cube=i*i*i;
        printf("%d\t%d\t%d\n",i,sqr,cube);
       
        scanf("%d",&i);
    }
}