//to create employee management system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Employee
    {
        char name[50];
        int id;
        int salary;
    }e[50];
    int i=0,j,choice,se_id,found;
    char ch;
    while(1)
    {
        printf("1.Add Employee\n");
        printf("2.Display All\n");
        printf("3.Search Employee\n");
        printf("4.Update Employee\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Name:");
                scanf("%s",e[i].name);
                printf("ID:");
                scanf("%d",&e[i].id);
                printf("Salary:");
                scanf("%d",&e[i].salary);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("ID:%d Name:%s Salary:%d\n",e[j].id,e[j].name,e[j].salary);
            }
        }
        if(choice==3)
        {
            printf("Enter Employee ID to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(e[j].id==se_id)
                {
                    printf("Employee Found - Name: %s, Salary: %d\n",e[j].name,e[j].salary);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Employee not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter Employee ID to update:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(e[j].id==se_id)
                {
                    printf("Enter New Name:");
                    scanf("%s",e[j].name);
                    printf("Enter New Salary:");
                    scanf("%d",&e[j].salary);
                    printf("Record updated successfully\n");
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Employee not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}