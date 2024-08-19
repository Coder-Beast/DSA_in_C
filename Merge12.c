void merge(int a[],int i1,int j1,int i2,int j2)
{
    int i,j,k;
    int temp[56];
    k=0;
    i = i1;
    j = i2;

    while (i<=j1 && j<=j2) {
        if(a[i]< a[j])
            temp[k++] = a[i++];
        else
         temp[k++] = a[j++];
    
    }

    while (i<=j1) {
        temp[k++] = a[i++];
    
    }
    while(j<=j2)
        temp[k++] = a[j++];

    for (i= i1, j=0; i<= j2; i++,j++) {
        a[i] = temp[j];
    }
}