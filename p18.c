#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter number to find factorial: ");
    scanf("%d",&n);
    printf("%d! is: %d\n",n,fact(n));
}
int fact(int n)
{
    if(n<=1)
    {
        return(1);
    }
    else
    {
        return(n*fact(n-1));
    }

}
