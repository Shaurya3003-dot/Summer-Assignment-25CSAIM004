//to remove duplicate characters 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int k=0;
    printf("Enter string: ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        int f=0;
        for(int j=0; j<i; j++)
        {
            if(str[i] == str[j])
            {
                f = 1;
            }
        }
        if(f == 0)
        {
            str[k] = str[i];
            k++;
        }
    }
    str[k] = '\0';
    printf("Result: %s\n", str);
    return 0;
}