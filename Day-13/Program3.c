//to find largest and smallest element in the array
#include <stdio.h>
int main()
{
    int arr[100], n, larg, small;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    larg=small=arr[1];
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>larg)
        {
            larg=arr[i];
        }
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    printf("Largest element is: %d\n", larg);
    printf("Smallest element is: %d\n", small);
    return 0;
}