<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter the length of array: ");
	scanf("%d", &n);
	int *ar = malloc(n * sizeof(int));
	//if(!ar) return 0;
	for(int i = 0; i < n; i++)
        {
                scanf("%d ", (ar + i));
        }
	for(int i = 0; i < n; i++)
        {
                printf("%d ", ar[i]);
        }
	printf("\n");
	int mi = 0, t;
	for(int i = 0; i < n; i++)
	{
		mi = i;
		for(int j = i; j < n; j++)
		{
			if(ar[j] < ar[mi])
				mi = j;
		}
		t = ar[mi];
		ar[mi] = ar[i];
		ar[i] = t;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
	}
	free(ar);
=======
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
    free(arr);
>>>>>>> 5c9f865773fc0321f29fc6f14c4e2ab13ce4157e
}
