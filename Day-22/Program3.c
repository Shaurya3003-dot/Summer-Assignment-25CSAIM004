//program to implement character frequency 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] != '\n' && str[i] != ' ')
        {
            int count=1;
            for(int j=i+1; str[j]!='\0'; j++)
            {
                if(str[i] == str[j])
                {
                    count++;
                    str[j] = ' ';
                }
            }
            printf("%c: %d\n", str[i], count);
        }
    }
    return 0;
}