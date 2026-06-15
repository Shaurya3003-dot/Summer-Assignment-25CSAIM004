//to rotate the array left 
#include <stdio.h>
int main()
{
    int arr[100], n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    temp=arr[1];
    for(int i=1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n]=temp;
    printf("Array after rotation at left:\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}