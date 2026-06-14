//to find duplicates in an array
#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are: ");
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}