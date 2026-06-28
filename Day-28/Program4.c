//to create contact management system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Contact
    {
        char name[50];
        char phone[15];
        char email[50];
    }c[50];
    int i=0,j,choice,found;
    char ch,se_name[50];
    while(1)
    {
        printf("1.Add Contact\n");
        printf("2.Display All\n");
        printf("3.Search Contact\n");
        printf("4.Update Contact\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Name:");
                scanf("%s",c[i].name);
                printf("Phone:");
                scanf("%s",c[i].phone);
                printf("Email:");
                scanf("%s",c[i].email);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("Name:%s Phone:%s Email:%s\n",c[j].name,c[j].phone,c[j].email);
            }
        }
        if(choice==3)
        {
            printf("Enter Name to search:");
            scanf("%s",se_name);
            found=0;
            for(j=0;j<i;j++)
            {
                if(strcmp(c[j].name,se_name)==0)
                {
                    printf("Found - Phone:%s Email:%s\n",c[j].phone,c[j].email);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Contact not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter Name to update:");
            scanf("%s",se_name);
            found=0;
            for(j=0;j<i;j++)
            {
                if(strcmp(c[j].name,se_name)==0)
                {
                    printf("Enter New Phone:");
                    scanf("%s",c[j].phone);
                    printf("Contact updated successfully\n");
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Contact not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}