#include<stdio.h>

int BC (int n,int k)
{
    if(k ==0 || k==n) return 1;
    else
     return  BC(n-1, k-1) + BC(n-1,k);
}


int main()
{
    printf("Binomial of 8 and 5 is: %d" , BC(8, 5));
    return  0;
}

