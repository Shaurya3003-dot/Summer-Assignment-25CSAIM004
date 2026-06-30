//create mini library system
#include<stdio.h>
int main()
{
    struct Library
    {
        int book_id;
        int copies;
    }lib[50];
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
                scanf("%d",&lib[i].book_id);
                printf("Copies:");
                scanf("%d",&lib[i].copies);
                printf("y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("ID:%d Copies:%d\n",lib[j].book_id,lib[j].copies);
            }
        }
        if(choice==3)
        {
            return 0;
        }
    }
    return 0;
}