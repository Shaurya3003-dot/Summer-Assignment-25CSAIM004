//to implement selection sort 
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
        for(int j=i+1; j<=n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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