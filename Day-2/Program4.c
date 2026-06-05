//to check whether a given number is palindrome 
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int temp=N; 
    int rev=0;
    while(N>0)
    {
        int rem = N % 10; 
        rev=rev*10+rem;   
        N=N/10;     
    }
    if(temp==rev)
        printf("The number is palindrome");
    else
        printf("The number is not palindrome");
    return 0;
}