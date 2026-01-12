/*read information about studenyts id, gpa and choosing whether he can graduate or honors or not graduate*/
#include<stdio.h>
int main()
{
    int id,total_s=0,total_g=0,total_h=0,total_f=0;
    float gpa;
    printf("id\tgpa\tstatus\n");
    printf("enter student id or enter -1 to stop\n");
    scanf("%d",&id);
    
    while(id!=00)
    {   
        
        printf("enter your gpa(0.00-4.00)\n");
        scanf("%f",&gpa);
        if(gpa>=3.5)
        {
            printf("honors\n");
            total_h++;
        
        }
        else if(gpa>=2.0)
        {
            printf("graduate\n");
            total_g++;
        }
        else
        {
            printf("sorry\n");
            total_f++;
        }
        printf("enter id if it is end enter 00\n");
        scanf("%d",&id);

    }
    printf("grad_\thonors\tfail\n");
    printf("%d\t%d\t%d",total_g,total_h,total_f);

}