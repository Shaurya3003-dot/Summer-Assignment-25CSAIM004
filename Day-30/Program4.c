//to develop mini project using arrays, strings and fuctions 
#include<stdio.h>
#include<string.h>
struct Project
{
    int proj_id;
    char name[50];
};
void display(struct Project p[], int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        printf("ID:%d Name:%s\n",p[j].proj_id,p[j].name);
    }
}
int main()
{
    struct Project pr[50];
    int i=0,choice;
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
                scanf("%d",&pr[i].proj_id);
                printf("Name:");
                scanf("%s",pr[i].name);
                printf("y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            display(pr,i);
        }
        if(choice==3)
        {
            return 0;
        }
    }
    return 0;
}