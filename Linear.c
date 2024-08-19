// working
#include<stdio.h>

int main()
{
    int i,key,flag=0,a[10],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements:-\n");
    for (i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements to be searched: ");
    scanf("%d",&key);

    for (i=1; i<=n; i++) {
        if(a[i] == key)
        {
            flag =1;
            break;
        }
    }
    if(flag ==1) printf("Search successfull!!........ Element is in %d postion",i);
    else
     printf("Search unsuccessfulll");
    return 0;
}