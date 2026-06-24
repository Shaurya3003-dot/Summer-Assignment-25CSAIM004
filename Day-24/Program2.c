//to compress a string 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int c=1;
    printf("Enter string: ");
    scanf("%s", str);
    printf("Compressed: ");
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == str[i+1])
        {
            c++;
        }
        else
        {
            printf("%c%d", str[i], c);
            c = 1;
        }
    }
    printf("\n");
    return 0;
}