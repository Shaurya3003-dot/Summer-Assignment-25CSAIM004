//to count words in a sentence 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int w=1;
    printf("Enter sentence: ");
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == ' ' && str[i+1] != '\n' && str[i+1] != '\0')
        {
            w++;
        }
    }
    printf("Total words: %d\n", w);
    return 0;
}