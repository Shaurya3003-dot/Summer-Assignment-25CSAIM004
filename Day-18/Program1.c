//a program to do bubble sort in an array
#include <stdio.h>
int main()
{
    int arr[100], n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}