#include<stdio.h>
void main()
{
    int n;
    printf("Enter no. of elements : ");
    scanf("%d", &n);
    int least, pos=0, *arr,swap;
    arr = (int *) malloc(n*sizeof(int));
    printf("Enter numbers: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        pos=i;
        least=arr[i];
        for(int j=i;j<n;j++)
            if(least>arr[j])
            {
                pos=j;
                least=arr[j];
            }
        swap=arr[pos];
        arr[pos]=arr[i];
        arr[i]=swap;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
