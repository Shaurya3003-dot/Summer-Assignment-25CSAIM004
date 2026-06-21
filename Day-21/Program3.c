//to count vowels and consonents in a string 
#include <stdio.h>
int main()
{
    char str[100];
    int v=0, c=0;
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            v++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            c++;
        }
    }
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    return 0;
}