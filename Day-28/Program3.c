//to creat ticket booking system
#include<stdio.h>
#include<string.h>
int main()
{
    struct Booking
    {
        char name[50];
        int ticket_id;
        int seats;
        int total_price;
    }t[50];
    int i=0,j,choice,se_id,found;
    char ch;
    while(1)
    {
        printf("1.Book Ticket\n");
        printf("2.Display All Bookings\n");
        printf("3.Search Ticket\n");
        printf("4.Update Seats\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Passenger Name:");
                scanf("%s",t[i].name);
                printf("Ticket ID:");
                scanf("%d",&t[i].ticket_id);
                printf("No of Seats:");
                scanf("%d",&t[i].seats);
                t[i].total_price=t[i].seats*500;
                printf("Enter y to continue:");
                scanf(" %c",&ch);
                i++;
            }
        }
        if(choice==2)
        {
            for(j=0;j<i;j++)
            {
                printf("ID:%d Name:%s Seats:%d Total:%d\n",t[j].ticket_id,t[j].name,t[j].seats,t[j].total_price);
            }
        }
        if(choice==3)
        {
            printf("Enter Ticket ID to search:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(t[j].ticket_id==se_id)
                {
                    printf("Found - Name:%s Total Price:%d\n",t[j].name,t[j].total_price);
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Booking not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter Ticket ID to update:");
            scanf("%d",&se_id);
            found=0;
            for(j=0;j<i;j++)
            {
                if(t[j].ticket_id==se_id)
                {
                    printf("Enter New No of Seats:");
                    scanf("%d",&t[j].seats);
                    t[j].total_price=t[j].seats*500;
                    printf("Seats updated successfully\n");
                    found=1;
                }
            }
            if(found==0)
            {
                printf("Booking not found\n");
            }
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}