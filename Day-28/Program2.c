//to create bank account system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Bank
    {
        char name[50];
        int ac_no;
        int balance;
    }b[50];
    int i=0,j,choice,se_id,found,amount;
    char ch;
    while(1)
    {
        printf("1.Create Account\n");
        printf("2.Display All Accounts\n");
        printf("3.Search Account\n");
        printf("4.Deposit/Withdraw\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Customer Name:");
                scanf("%s",b[i].name);
                printf("Account No:");
                scanf("%d",&b[i].ac_no);
                printf("Initial Balance:");
                scanf("%d",&b[i].balance);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("AccNo:%d Name:%s Balance:%d\n",b[j].ac_no,b[j].name,b[j].balance);
            }
        }
        if(choice==3)
        {
            printf("Enter Account No to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(b[j].ac_no==se_id)
                {
                    printf("Found - Name:%s Balance:%d\n",b[j].name,b[j].balance);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Account not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter Account No:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(b[j].ac_no==se_id)
                {
                    printf("Enter Amount (use negative for withdraw):");
                    scanf("%d",&amount);
                    b[j].balance=b[j].balance+amount;
                    printf("Transaction successful. New Balance:%d\n",b[j].balance);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Account not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}