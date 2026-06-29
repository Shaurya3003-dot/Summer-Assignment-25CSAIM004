//to creat inventory management system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Inventory
    {
        char item_name[50];
        int item_id;
        int qty;
        int price;
    }inv[50];
    int i=0,j,choice,se_id,found;
    char ch;
    while(1)
    {
        printf("1.Add Product Stock\n");
        printf("2.Display Current Inventory\n");
        printf("3.Search Product\n");
        printf("4.Update Stock/Price\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Item Name:");
                scanf("%s",inv[i].item_name);
                printf("Item ID:");
                scanf("%d",&inv[i].item_id);
                printf("Quantity:");
                scanf("%d",&inv[i].qty);
                printf("Price:");
                scanf("%d",&inv[i].price);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("ID:%d Name:%s Qty:%d Price:%d\n",inv[j].item_id,inv[j].item_name,inv[j].qty,inv[j].price);
            }
        }
        if(choice==3)
        {
            printf("Enter Item ID to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(inv[j].item_id==se_id)
                {
                    printf("Found - Name:%s Qty:%d Price:%d\n",inv[j].item_name,inv[j].qty,inv[j].price);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Product not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter Item ID to update:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(inv[j].item_id==se_id)
                {
                    printf("Enter New Quantity:");
                    scanf("%d",&inv[j].qty);
                    printf("Enter New Price:");
                    scanf("%d",&inv[j].price);
                    printf("Inventory updated successfully\n");
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Product not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}