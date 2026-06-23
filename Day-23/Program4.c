//to find maximum occuring characters 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int max=0;
    char ans;
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        int c=0;
        for(int j=0; str[j]!='\0'; j++)
        {
            if(str[i] == str[j])
            {
                c++;
            }
        }
        if(c > max)
        {
            max = c;
            ans = str[i];
        }
    }
    printf("Max character: %c\n", ans);
    return 0;
}