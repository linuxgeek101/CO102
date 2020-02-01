#include<stdio.h>
void main()
{
    int least, pos=0, arr[10],swap;
    printf("Enter numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<9;i++)
    {
        pos=i;
        least=arr[i];
        for(int j=i;j<10;j++)
            if(least>arr[j])
            {
                pos=j;
                least=arr[j];
            }
        swap=arr[pos];
        arr[pos]=arr[i];
        arr[i]=swap;
    }
    for(int i=0;i<10;i++)
        printf("\n%d",arr[i]);
}