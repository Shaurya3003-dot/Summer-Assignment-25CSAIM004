//to create menu-driven array operations system
#include<stdio.h>
#include<string.h>
int main()
{
    struct ArrayData
    {
        int arr[50];
    }a;
    int i=0,j,choice,se_id,found,pos;
    char ch;
    while(1)
    {
        printf("1.Insert Element\n");
        printf("2.Display Array\n");
        printf("3.Search Element\n");
        printf("4.Update Element\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Enter number:");
                scanf("%d",&a.arr[i]);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("%d ",a.arr[j]);
            }
            printf("\n");
        }
        if(choice==3)
        {
            printf("Enter element value to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(a.arr[j]==se_id)
                {
                    printf("Found at position index: %d\n",j);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Element not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter index position to update:");
            scanf("%d",&pos);
            if(pos>=0 && pos<i)
            {
                printf("Enter new value:");
                scanf("%d",&a.arr[pos]);
                printf("Element updated successfully\n");
            }
            if(pos<0 || pos>=i)
            {
                printf("Invalid index selection\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}