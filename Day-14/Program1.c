//to make an array for linear search
#include <stdio.h>
int main()
{
    int arr[100], n, s, f=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &s);
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==s)
        {
            printf("Element found at position: %d\n", i);
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("Element not found in the array\n");
    }
    return 0;
}