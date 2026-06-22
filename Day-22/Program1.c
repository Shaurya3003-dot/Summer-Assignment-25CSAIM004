//to check palindrome string 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len=0, pal=1;
    printf("Enter string: ");
    scanf("%s", str);
    len = strlen(str);
    for(int i=0; i<len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            pal = 0;
        }
    }
    if(pal == 1)
    {
        printf("Palindrome string\n");
    }
    else
    {
        printf("Not a palindrome string\n");
    }
    return 0;
}