#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    int check=1;
    char str[50]="\0";
    printf("Enter a string: ");
    gets(str);
    tolower(str);
    for(int i=0; i<=(strlen(str)/2);i++)
        if(tolower(str[i])!=tolower(str[(strlen(str)-i-1)]))
            {
                check=0;
                break;
            }
    if(check==1)
    printf("String is a palindrome!");
    else
    printf("String is NOT a palindrome!");    
}