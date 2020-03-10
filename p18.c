#include<stdio.h>
int fact(int);
void main()
{
    int x;
    printf("Enter number to find factorial: ");
    scanf("%d",&x);
    printf("%d! is: %d",x,fact(x));
}
int fact(int x)
{
    if(x==1)
    {
        return(1);
    }
    else
    {
        return(x*fact(x-1));
    }

}