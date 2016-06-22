#include<stdio.h>
main()
{
    int a[30],x,y,z;
    printf("Insert (5) value in array\n");
    for(x=0;x<5;x++)
    {
        scanf("%d",&a[x]);
    }
    for(x=4;x>=0;x--)
    {
        for(y=0;y<x;y++)
        {
            if(a[x]<a[y])
            {
                z=a[y];
                a[y]=a[x];
                a[x]=z;
            }
        }
    }
    printf("\nValue Sorting Finished.\nShowing Value in Accending Order\n\n");
    for(x=0;x<5;x++)
    {
        printf("%d\n",a[x]);
    }
}
