//to find first non repeating character
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
        int f=1;
        for(int j=0; str[j]!='\0' && str[j]!='\n'; j++)
        {
            if(i != j && str[i] == str[j])
            {
                f = 0;
            }
        }
        if(f == 1 && found == 0)
        {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
        }
    }
    if(found == 0)
    {
        printf("All characters are repeating\n");
    }
    return 0;
}