//to create voting eligibility system
#include<stdio.h>
int main()
{
    struct Voting
    {
        int voter_id;
        int age;
    }vot[50];
    int i=0,j,choice,se_id;
    char ch;
    while(1)
    {
        printf("1.Add\n2.Display\n3.Check\n4.Exit\n");
        printf("Choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("ID:");
                scanf("%d",&vot[i].voter_id);
                printf("Age:");
                scanf("%d",&vot[i].age);
                printf("y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("ID:%d Age:%d\n",vot[j].voter_id,vot[j].age);
            }
        }
        if(choice==3)
        {
            printf("ID:");
            scanf("%d",&se_id);
            for(j=0;j<i;j++)
            {
                if(vot[j].voter_id==se_id)
                {
                    if(vot[j].age>=18)
                    {
                        printf("Eligible\n");
                    }
                    else
                    {
                        printf("Not Eligible\n");
                    }
                }
            }
        }
        if(choice==4)
        {
            return 0;
        }
    }
    return 0;
}