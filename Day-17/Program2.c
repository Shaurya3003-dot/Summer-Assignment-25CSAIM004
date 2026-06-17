//to union of arrays 
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], uarr[200], n1, n2, k=0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(int i=1; i<=n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for(int i=1; i<=n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(int i=1; i<=n1; i++)
    {
        k++;
        uarr[k]=arr1[i];
    }
    for(int i=1; i<=n2; i++)
    {
        int found=0;
        for(int j=1; j<=k; j++)
        {
            if(arr2[i]==uarr[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            k++;
            uarr[k]=arr2[i];
        }
    }
    printf("Union of arrays:\n");
    for(int i=1; i<=k; i++)
    {
        printf("%d ", uarr[i]);
    }
    printf("\n");
    return 0;
}