
#include <stdio.h>
int partition(int a[], int low,int high)
{
    int j,i,pivot,temp,flag = 1;
    pivot = a[low];
    i = low+1;
    j = high;
    flag = 1;
    while (flag == 1) {
    while((a[i]< pivot) && (i<j)) i++;
    while(a[j]> pivot) j--;

    if(i<j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    else {
    flag = 0;
    }
    }

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

int quicksort(int a[],int low,int high)
{
    int kp;
    if(low > high) return 0;

    kp = partition(a, low, high);

    quicksort(a,low, kp-1);
    quicksort(a, kp+1, high);
}