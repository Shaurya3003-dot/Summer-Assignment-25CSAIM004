//to move zeroes to end 
#include <stdio.h>
int main()
{
    int arr[100], n, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count=1;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }
    for(int i=count; i<=n; i++)
    {
        arr[i]=0;
    }
    printf("Array after moving zeroes to end:\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}