#include<stdio.h>
void main()
{
    int *ptr1, *ptr2, *swap;
    int x,y,temp;
    printf("Two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Before swappig, x = %d and y = %d",x,y);
    ptr1 = &x;
    ptr2 = &y;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp; 
    printf("\nNumbers swapped: x = %d and y = %d", x, y);
}