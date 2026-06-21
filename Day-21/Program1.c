//to find string length without using strlen
#include <stdio.h>
int main()
{
    char str[100];
    int len=0;
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    printf("Length of string: %d\n", len);
    return 0;
}