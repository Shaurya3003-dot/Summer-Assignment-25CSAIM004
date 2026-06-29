//to create menu-driven calculator
#include<stdio.h>
int main()
{
    struct Calc
    {
        int num1;
        int num2;
        int res;
    }d;
    int choice;
    char ch;
    while(1)
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==5)
        {
            return 0;
        }
        if(choice>=1 && choice<=4)
        {
            ch='y';
            while(ch=='y' || ch=='Y')
            {
                printf("Enter first number:");
                scanf("%d",&d.num1);
                printf("Enter second number:");
                scanf("%d",&d.num2);
                if(choice==1)
                {
                    d.res=d.num1+d.num2;
                }
                if(choice==2)
                {
                    d.res=d.num1-d.num2;
                }
                if(choice==3)
                {
                    d.res=d.num1*d.num2;
                }
                if(choice==4)
                {
                    if(d.num2!=0)
                    {
                        d.res=d.num1/d.num2;
                    }
                    if(d.num2==0)
                    {
                        d.res=0;
                    }
                }
                printf("Result: %d\n",d.res);
                printf("Enter y to continue:");
                scanf(" %c",&ch);
            }
        }
    }
    return 0;
}