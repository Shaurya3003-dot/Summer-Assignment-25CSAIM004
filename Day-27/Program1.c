//to create a student management system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Student
    {
        char name[50];
        int roll_no;
    }s[50];
    int i=0,j,choice,se_roll,found;
    char ch;
    while(1)
    {
        printf("1.Add Student\n");
        printf("2.Display All\n");
        printf("3.Search Student\n");
        printf("4.Update Student\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Name:");
                scanf("%s",s[i].name);
                printf("Roll No:");
                scanf("%d",&s[i].roll_no);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("%d %s\n",s[j].roll_no,s[j].name);
            }
        }
        if(choice==3)
        {
            printf("Enter Roll No to search:");
            scanf("%d",&se_roll);
            found=0;
            for(j=0;j<i;j++)
            {
                if(s[j].roll_no==se_roll)
                {
                    printf("Student Found: %s\n",s[j].name);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Student not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter Roll No to update:");
            scanf("%d",&se_roll);
            found=0;
            for(j=0;j<i;j++)
            {
                if(s[j].roll_no==se_roll)
                {
                    printf("Enter New Name:");
                    scanf("%s",s[j].name);
                    printf("Record updated successfully\n");
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Student not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}