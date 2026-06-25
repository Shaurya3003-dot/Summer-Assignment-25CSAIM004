//to sort names alphabetically
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50][50], temp[50];
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    printf("Enter names:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%s", str[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nSorted names:\n");
    for(int i=0; i<n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}