//to write a funciton for palindrome 
#include<stdio.h>
int Palindrome(int n)
{
    int temp=n;
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
}    
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    Palindrome(N);
    return 0;
}