#include <stdio.h>
int main()
{
    int *ptr1, *ptr2;
    int x, y, temp;
    printf("Two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Before swapping : x = %d and y = %d\n",x,y);
    ptr1 = &x;
    ptr2 = &y;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp; 
    printf("\nAfter swapping : x = %d and y = %d\n", x, y);
}
