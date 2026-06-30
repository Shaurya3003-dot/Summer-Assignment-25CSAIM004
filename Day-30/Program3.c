//to create mini employee system
#include<stdio.h>
int main()
{
    struct Employee
    {
        int emp_id;
        int salary;
    }emp[50];
    int i=0,j,choice;
    char ch;
    while(1)
    {
        printf("1.Add\n2.Display\n3.Exit\n");
        printf("Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("ID:");
                scanf("%d",&emp[i].emp_id);
                printf("Salary:");
                scanf("%d",&emp[i].salary);
                printf("y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("ID:%d Salary:%d\n",emp[j].emp_id,emp[j].salary);
            }
        }
        if(choice==3)
        {
            return 0;
        }
    }
    return 0;
}