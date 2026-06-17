//to do intersections of arrays 
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], iarr[100], n1, n2, k=0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements:\n");
    for(int i=1; i<=n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements:\n");
    for(int i=1; i<=n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(int i=1; i<=n1; i++)
    {
        for(int j=1; j<=n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                k++;
                iarr[k]=arr1[i];
                break;
            }
        }
    }
    printf("Intersection:\n");
    for(int i=1; i<=k; i++)
    {
        printf("%d ", iarr[i]);
    }
    printf("\n");
    return 0;
}