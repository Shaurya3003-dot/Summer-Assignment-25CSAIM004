//to sort words by length
#include<stdio.h>
#include<string.h>
int main()
{
    char words[50][50],temp[50];
    int i,j,n;
    printf("Enter number of words:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter word:");
        scanf("%s",words[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strlen(words[j])>strlen(words[j+1]))
            {
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    printf("Sorted words:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",words[i]);
    }
    return 0;
}