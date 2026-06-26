//to create ATM simulation 
#include<stdio.h>
int main()
{
    struct ATM
    {
        int acc_no;
        int pin;
        int balance;
    }atm[50];
    int i=0,j,choice,se_id,enter_pin,found,amt;
    char ch;
    while(1)
    {
        printf("1.Add\n2.Display\n3.Withdraw\n4.Deposit\n5.Exit\n");
        printf("Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Acc:");
                scanf("%d",&atm[i].acc_no);
                printf("PIN:");
                scanf("%d",&atm[i].pin);
                printf("Bal:");
                scanf("%d",&atm[i].balance);
                printf("y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("Acc:%d Bal:%d\n",atm[j].acc_no,atm[j].balance);
            }
        }
        if(choice==3)
        {
            printf("Acc:");
            scanf("%d",&se_id);
            printf("PIN:");
            scanf("%d",&enter_pin);
            for(j=0;j<i;j++)
            {
                if(atm[j].acc_no==se_id && atm[j].pin==enter_pin)
                {
                    printf("Amt:");
                    scanf("%d",&amt);
                    if(amt<=atm[j].balance)
                    {
                        atm[j].balance=atm[j].balance-amt;
                    }
                }
            }
        }
        if(choice==4)
        {
            printf("Acc:");
            scanf("%d",&se_id);
            printf("PIN:");
            scanf("%d",&enter_pin);
            for(j=0;j<i;j++)
            {
                if(atm[j].acc_no==se_id && atm[j].pin==enter_pin)
                {
                    printf("Amt:");
                    scanf("%d",&amt);
                    atm[j].balance=atm[j].balance+amt;
                }
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}