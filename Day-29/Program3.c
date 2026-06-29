//to create menu-driven string operation system
#include<stdio.h>
#include<string.h>
int main()
{
    struct StringData
    {
        char str1[50];
        char str2[50];
    }s;
    int choice,i,j,found;
    char ch,se_id;
    while(1)
    {
        printf("1.String Length\n");
        printf("2.String Copy\n");
        printf("3.Search Character\n");
        printf("4.Update/Replace String\n");
        printf("5.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter string:");
            scanf("%s",s.str1);
            i=0;
            while(s.str1[i]!='\0')
            {
                i++;
            }
            printf("Length: %d\n",i);
        }
        if(choice==2)
        {
            printf("Enter string to copy:");
            scanf("%s",s.str1);
            j=0;
            while(s.str1[j]!='\0')
            {
                s.str2[j]=s.str1[j];
                j++;
            }
            s.str2[j]='\0';
            printf("Copied string in str2: %s\n",s.str2);
        }
        if(choice==3)
        {
            printf("Enter string to scan:");
            scanf("%s",s.str1);
            printf("Enter character to search:");
            scanf(" %c",&se_id);
            found=0;
            j=0;
            while(s.str1[j]!='\0')
            {
                if(s.str1[j]==se_id)
                {
                    printf("Found character at index: %d\n",j);
                    found=1;
                }
                j++;
            }
            if(found==0)
            {
                printf("Character not found\n");
            }
        }
        if(choice==4)
        {
            printf("Enter new string content:");
            scanf("%s",s.str1);
            printf("String updated successfully to: %s\n",s.str1);
        }
        if(choice==5)
        {
            return 0;
        }
    }
    return 0;
}