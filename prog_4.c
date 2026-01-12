 /*company customer id,orders amount,amount paid and due of each customer and total 
 company invest and balance money. printing all this data*/
 #include<stdio.h>
 int main()
 {
    int id,amount,paid,due;
    int c_amount=0,c_paid=0,c_due=0;
    printf("customer information\n");
    printf("id\tamount\tpaid\tbalance\t  status\n");
    scanf("%d",&id);
    while(id!=-1111)
    {
        scanf("%d",&amount);
        scanf("%d",&paid);
        due=amount-paid;
        printf("%d\t%d\t%d\t%d\t",id,amount,paid,due);
        c_amount+=amount;
        c_paid+=paid;
        c_due+=due;
        if(due>=0)
        {
            printf("amount_owed\n");
        }
        else
        {
            
            printf("credit\n");
        }
        printf("enter -1111 for end of the data\n");
        scanf("%d",&id);
    }
    printf("company information\n");
    printf("c_amount\tpaid_for\tdues\n");
    printf("%6d\t%13d\t%13d\t\n",c_amount,c_paid,c_due);

    
    printf("end of the handy hardware company information");

 }
