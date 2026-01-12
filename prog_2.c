/*read input from the user only positive values and printing square and square root and if it is -ve end of the data*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,sqr;
    double sroot;
    printf("number\tsquare\tsqroot\n\n");
    scanf("%d",&i);
    while(i>=0)
    {
        sqr=i*i;
        sroot=sqrt(i);
        printf("%d\t%d\t%.4f\n",i,sqr,sroot);
        scanf("%d",&i);

   }
}