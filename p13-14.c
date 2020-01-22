#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
	int *ar;int n, x;
	printf("No. of elements : ");
	scanf("%d", &n);
	ar = (int *) malloc(n * sizeof(int));
	for(int i = 0; i < n; i++)
	{
		scanf("%d", ar + i);
	}
	printf("Enter a number to search : ");
	scanf("%d", &x);
	int temp = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n-1; j++)
		{
			if(ar[j] > ar[j+1])
			{
				temp = ar[j+1];
				ar[j+1] = ar[j];
				ar[j] = temp;
			}

		}
	}

	int ub = n-1, lb = 0, m = (ub + lb )/2;
	bool found = false;
	int cnt = 0;
	while(ub >= lb && lb >= 0 && ub < n && found==false && cnt <= log(n)/log(2))
	{
		m = (ub + lb)/2;
		if(ar[m] == x)
			found = true;
		if(ar[m] > x)
			ub = m-1;
		if(ar[m] < x)
			lb = m+1;
		cnt++;
	}
	printf("Result : %s\n", (found?"Found":"Not Found"));
	free(ar);

}
