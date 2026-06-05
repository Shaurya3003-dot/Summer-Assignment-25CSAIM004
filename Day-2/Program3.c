//to find the product of digits of a number
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int prod=1;
    while(N>0)
    {
        int rem = N % 10; 
        prod=prod*rem;   
        N=N/10;     
    }
    printf("Product of digits is: %d", prod);
    return 0;
}     