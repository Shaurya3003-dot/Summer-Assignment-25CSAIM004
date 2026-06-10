//to print character triangle (done by concept of ASCII value)
#include <stdio.h>
int main()
{
    int N=5;
    for(int i=1; i<=N; i++)
    {
        for(char j ='A'; j<'A'+i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}