#include<stdio.h>
void main()
{
    char str1[100]="\0", str2[50]="\0";
    int i=0;
    printf("Please enter first string: ");
    gets(str1);
    printf("Please enter second string: ");
    gets(str2);
    for(i=0; str1[i]!='\0';i++);
    for(int j=0;str2[j]!='\0';j++)
    {
        str1[i+j]=str2[j];
    }
    printf("Strings concatenated, result: %s",str1);
}