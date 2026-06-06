//to print prime numbers in range (between a Lower limit and an Upper limit)
#include<stdio.h>
int main()
{
    int low,upp;
    printf("Enter the lower limit number: ");
    scanf("%d",&low);
    printf("Enter the upper limit number: ");
    scanf("%d",&upp);
    printf("Prime numbers between %d and %d are: ",low,upp);
    for(int i=low;i<=upp;i++)
    {
        if(i<=1)
        {
            continue;
        }
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}