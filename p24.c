#include<stdio.h>
void main()
{
    char str[50], swap;
    int i=0;
    printf("Enter the string: ");
    gets(str);
    printf("Reverse of the string: ");
    for(i=0;str[i]!='\0';i++);
    for(int j=0;j<i/2;j++)
    {
        swap=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=swap;
    }
    printf("%s",str);
}