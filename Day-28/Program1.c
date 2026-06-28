//to create library management system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Book
    {
        char bname[50];
        int acc_no;
    }b[50];
    int i=0,j,choice,search_acc,found;
    char ch;
    while(1)
    {
        printf("1.Add Book\n");
        printf("2.Display All\n");
        printf("3.Search Book\n");
        printf("4.Update Book\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Book Name:");
                scanf("%s",b[i].bname);
                printf("Accession No:");
                scanf("%d",&b[i].acc_no);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("%s %d\n",b[j].bname,b[j].acc_no);
            }
        }
        if(choice==3)
        {
            printf("Enter the accession no. to search:");
            scanf("%d",&search_acc);
            found=0;
            for(j=0;j<i;j++)
            {
                if(b[j].acc_no==search_acc)
                {
                    printf("Book Found: %s\n",b[j].bname);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Book not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter the accession no. to update:");
            scanf("%d",&search_acc);
            found=0;
            for(j=0;j<i;j++)
            {
                if(b[j].acc_no==search_acc)
                {
                    printf("Enter New Book Name:");
                    scanf("%s",b[j].bname);
                    printf("Book updated successfully\n");
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Book not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}