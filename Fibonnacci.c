#include<stdio.h>
int fib(int num)
{
    if(num ==0) return 0;
    else if(num == 1) return 1;
    else
        return (fib(num -1) + fib(num-2));
}

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n );
    printf("Series:\n");
    for (int i =0; i<= n; i++) {
    printf("%d\n",fib(i));
    }
    return 0;
}