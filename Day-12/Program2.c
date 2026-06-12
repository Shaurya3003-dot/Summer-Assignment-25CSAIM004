//to wrote a function for armstrong number
#include<stdio.h>
int Armstrong(int n)
{
    int temp=n;
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number is armstrong");
    }
    else
    {
        printf("The number is not armstrong");
    }
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    Armstrong(N);
    return 0;
}