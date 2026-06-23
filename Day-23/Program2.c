//to find first repeating character
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int found=0;
    printf("Enter string: ");
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0' && str[i]!='\n'; i++)
    {
        int f=0;
        for(int j=i+1; str[j]!='\0' && str[j]!='\n'; j++)
        {
            if(str[i] == str[j])
            {
                f = 1;
            }
        }
        if(f == 1 && found == 0)
        {
            printf("First repeating character: %c\n", str[i]);
            found = 1;
        }
    }
    if(found == 0)
    {
        printf("No repeating characters\n");
    }
    return 0;
}