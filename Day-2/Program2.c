//To reverse a number
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int rev=0;
    while(N>0)
    {
        int rem = N % 10; 
        rev=rev*10 +rem;   
        N=N/10;     
    }
    printf("Reversed number is: %d", rev);
    return 0;
}