//to create marksheet generation system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Marksheet
    {
        char name[50];
        int roll_no;
        int m1;
        int m2;
        int total;
    }m[50];
    int i=0,j,choice,se_id,found;
    char ch;
    while(1)
    {
        printf("1.Add Marks Record\n");
        printf("2.Display All Marksheets\n");
        printf("3.Search Marksheet\n");
        printf("4.Update Marks\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Student Name:");
                scanf("%s",m[i].name);
                printf("Roll No:");
                scanf("%d",&m[i].roll_no);
                printf("Enter Marks 1:");
                scanf("%d",&m[i].m1);
                printf("Enter Marks 2:");
                scanf("%d",&m[i].m2);
                m[i].total=m[i].m1+m[i].m2;
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("Roll:%d Name:%s M1:%d M2:%d Total:%d\n",m[j].roll_no,m[j].name,m[j].m1,m[j].m2,m[j].total);
            }
        }
        if(choice==3)
        {
            printf("Enter Roll No to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(m[j].roll_no==se_id)
                {
                    printf("Found - Name:%s Total Marks:%d\n",m[j].name,m[j].total);
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
            printf("Enter Roll No to update:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(m[j].roll_no==se_id)
                {
                    printf("Enter New Marks 1:");
                    scanf("%d",&m[j].m1);
                    printf("Enter New Marks 2:");
                    scanf("%d",&m[j].m2);
                    m[j].total=m[j].m1+m[j].m2;
                    printf("Marks updated successfully\n");
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