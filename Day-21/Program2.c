//to reverse a string 
#include <stdio.h>
int main()
{
    char str[100], temp;
    int len=0;
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    for(int i=0; i<len/2; i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}