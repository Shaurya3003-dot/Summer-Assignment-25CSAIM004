//create student record system using arrays and strings
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50][50];
    int roll_no[50];
    char grade[50];
    int i=0,j,choice,se_id,found;
    char ch;
    while(1)
    {
        printf("1.Add Student\n");
        printf("2.Display All\n");
        printf("3.Search Student\n");
        printf("4.Update Student Name\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Name:");
                scanf("%s",name[i]);
                printf("Roll No:");
                scanf("%d",&roll_no[i]);
                printf("Grade:");
                scanf(" %c",&grade[i]);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("Roll:%d Name:%s Grade:%c\n",roll_no[j],name[j],grade[j]);
            }
        }
        if(choice==3)
        {
            printf("Enter Roll No to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(roll_no[j]==se_id)
                {
                    printf("Found - Name:%s Grade:%c\n",name[j],grade[j]);
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
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(roll_no[j]==se_id)
                {
                    printf("Enter New Name:");
                    scanf("%s",name[j]);
                    printf("Name updated successfully\n");
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