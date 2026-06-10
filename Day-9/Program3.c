//to print repeated character pattern triangle (By knowing the concept of ASCII code)
#include <stdio.h>
int main()
{
    int N=5;
    for(char i = 'A'; i < 'A'+N; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
}