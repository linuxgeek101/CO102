<<<<<<< HEAD
#include <stdio.h>
int main()
{
	int n;
	printf("Enter length: ");
	scanf("%d", &n);
	int ar[n];
	printf("Enter elements: ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", ar+i);
	}
	int temp = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(ar[j] < ar[i])
			{
				temp = ar[j];
				ar[j] = ar[i];
				ar[i] = temp;
			}
		}
	}
	printf("\n");
	for(int  i = 0; i < n; i++)
                printf("%d ", ar[i]);
	printf("\n");
}
=======
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
        for(int j=pos;j>i;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[i]=swap;
    }
    for(int i=0;i<10;i++)
        printf("\n%d",arr[i]);
}
>>>>>>> 5c9f865773fc0321f29fc6f14c4e2ab13ce4157e
