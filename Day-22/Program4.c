//to remove space from a string 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int j=0;
    printf("Enter string: ");
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("String without spaces: %s", str);
    return 0;
}