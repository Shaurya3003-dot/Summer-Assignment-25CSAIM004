//to rotate the array right 
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
    temp=arr[n];
    for(int i=n; i>1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[1]=temp;
    printf("Array after right rotation:\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}