//to find the longest word
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int max=0, c=0, s=0, ms=0;
    printf("Enter sentence: ");
    scanf(" %[^\n]", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] != ' ')
        {
            if(c == 0)
            {
                s = i;
            }
            c++;
        }
        if(str[i] == ' ' || str[i+1] == '\0')
        {
            if(c > max)
            {
                max = c;
                ms = s;
            }
            c = 0;
        }
    }
    printf("Longest word: ");
    for(int i=ms; i<ms+max; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}