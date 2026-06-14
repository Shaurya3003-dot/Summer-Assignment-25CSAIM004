//to find second largest element in array
#include <stdio.h>
int main()
{
    int arr[100], n, larg, slarg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    larg=arr[1];
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>larg)
        {
            larg=arr[i];
        }
    }
    slarg=arr[1];
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>slarg && arr[i]<larg)
        {
            slarg=arr[i];
        }
    }
    printf("Second largest element in the array is: %d\n", slarg);
    return 0;
}