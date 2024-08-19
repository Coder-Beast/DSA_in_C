#include<stdio.h>
void selection(int a[],int n);
void bubble(int a[],int n);
void insertion(int a[],int n);



int main()
{
    int i,n,a[20];
    printf("Enter size: ");
    scanf_s("%d",&n);
    printf("Enter the %d elements", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    insertion(a, n);
    printf("Sorted elements are:\n");
    for (i =0; i<n ; i++) {
        printf("%d\t",a[i]);
    }

    return 0;

}
void selection(int a[],int n){
    int pos,small,temp;

    for (int i=0; i<n; i++) {
        small = a[i];
        pos = i;
        for (int j = i+1;j<n; j++) {
            if(a[j] <small)
            {
                small = a[j];
                pos = j;
            }
        }
        temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }
}
void bubble(int a[],int n)
{
    int temp;
    for(int j = 1;j<n;j++)
    {
        for (int i = 0; i<n-j; i++) {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}

void insertion(int a[],int n)
{
    int temp;
    for(int i = 1; i<n;i++)
    {
        for(int j = i; j>=1;j--)
        {
            if(a[j] < a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] =temp;
            }
        }
    }
}

