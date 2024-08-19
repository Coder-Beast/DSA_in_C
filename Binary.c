#include<stdio.h>

int main()
{
    int i,key,a[10],n,low,high,mid;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements:-\n");
    for (i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements to be searched: ");
    scanf("%d",&key);

    low = 1;
    high =n;

    while (low <=high) {
        mid = (low+high) /2;
        if(key == a[mid])
        {
            printf("Element is in postion %d", mid);
            return 0;
            break;
        }
        if(key <a[mid])
            high = mid-1;
        else
         low = mid +1;
    }

    printf("\n Search unsuccessful!");
    return 0;
}