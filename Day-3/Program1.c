//to check whether a number is prime 
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    if(N<=1)
    {
        printf("%d is not a prime number.",N);
    }
    else
    {
        int flag=0;
        for(int i=2;i<=N/2;i++)
        {
            if(N%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d is a prime number.",N);
        }
        else
        {
            printf("%d is not a prime number.",N);
        }
    }
    return 0;

}