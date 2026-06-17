//to merge arrays 
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], mearr[100], n1, n2, k=1;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(int i=1; i<=n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for(int i=1; i<=n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(int i=1; i<=n1; i++)
    {
        mearr[k]=arr1[i];
        k++;
    }
    for(int i=1; i<=n2; i++)
    {
        mearr[k]=arr2[i];
        k++;
    }
    printf("Merged array:\n");
    for(int i=1; i<=n1+n2; i++)
    {
        printf("%d ", mearr[i]);
    }
    printf("\n");
    return 0;
}