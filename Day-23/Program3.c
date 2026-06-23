//to check anagram strings (words that can create or make another word using the same letters)
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for(int i=0; str1[i]!='\0'; i++)
    {
        for(int j=i+1; str1[j]!='\0'; j++)
        {
            if(str1[i] > str1[j])
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for(int i=0; str2[i]!='\0'; i++)
    {
        for(int j=i+1; str2[j]!='\0'; j++)
        {
            if(str2[i] > str2[j])
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    if(strcmp(str1, str2) == 0)
    {
        printf("Strings are anagrams\n");
    }
    else
    {
        printf("Strings are not anagrams\n");
    }
    return 0;
}