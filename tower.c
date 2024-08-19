#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,small,large;
int *ptr;
printf("Enter the total number of elements: ");
scanf("%d", &n);
ptr= (int *)calloc(n, sizeof(int));
if (ptr == NULL)
{
printf("Error!!! memory not allocated.");
exit(0);
}
printf("Enter %d Elements:\n", n);
for (i = 0; i < n; ++i)
{
scanf("%d",ptr + i);
}
small = *ptr;
for (i = 1; i < n; ++i)
{
if (small >*(ptr + i))
{
small = *(ptr + i);
}
}
printf("\nsmallest number = %d", small);

large = *ptr;
for (i = 1; i < n; ++i)
{
if (large <*(ptr + i))
{
large = *(ptr + i);
}
}
printf("\nLargest number = %d", large);
free(ptr);
return 0;
}