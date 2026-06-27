//to create salary management system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Payroll
    {
        char name[50];
        int id;
        int basic_salary;
        int net_salary;
    }p[50];
    int i=0,j,choice,se_id,found;
    char ch;
    while(1)
    {
        printf("1.Add Salary Record\n");
        printf("2.Display All Slips\n");
        printf("3.Search Pay Slip\n");
        printf("4.Update Salary\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Employee Name:");
                scanf("%s",p[i].name);
                printf("Employee ID:");
                scanf("%d",&p[i].id);
                printf("Basic Salary:");
                scanf("%d",&p[i].basic_salary);
                p[i].net_salary=p[i].basic_salary+(p[i].basic_salary*10/100);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("ID:%d Name:%s Basic:%d NetPay:%d\n",p[j].id,p[j].name,p[j].basic_salary,p[j].net_salary);
            }
        }
        if(choice==3)
        {
            printf("Enter Employee ID to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(p[j].id==se_id)
                {
                    printf("Found - Name:%s NetPay:%d\n",p[j].name,p[j].net_salary);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Record not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter Employee ID to update:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(p[j].id==se_id)
                {
                    printf("Enter New Basic Salary:");
                    scanf("%d",&p[j].basic_salary);
                    p[j].net_salary=p[j].basic_salary+(p[j].basic_salary*10/100);
                    printf("Salary updated successfully\n");
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Record not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}