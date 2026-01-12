/*statistics of students how they did on an exam*/
/*reading id right ans and wrong ans answered and omitted ones and printing them*/
#include<stdio.h>
int main()
{
    int id,rans,wans;
    int qns=50;
    int ans,omit;
    printf("enter student id\n");
    scanf("%d",&id);
    while(id!=-11)
    {
        printf("enter right answers\n");
        scanf("%d",&rans);
       printf("enter wrong answers\n");
        scanf("%d",&wans);
        printf("enter number of answered");
        scanf("%d",&ans);
        omit=qns-ans;
         if(rans+wans>qns)
        {   printf("enter valid data\n");
            break;
        printf("id number %d has %d right and %d wrong\n",id,rans,wans);
        printf("total answered:%d\nnumber omitted is: %d\n",ans,omit);
       
        }
    }
        printf("enter student id if it is end enter -11\n");
        scanf("%d",&id);
    
    printf("the execution completed\n");
}