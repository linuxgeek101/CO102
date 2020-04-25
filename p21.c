#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    _Bool isPalindrome = true;
    char str[256]="\0";
    printf("Enter a string: ");
    fgets(str, 256, stdin);
    int len = strlen(str) - 1;
    for(int i=0; i <= len/2; i++)
    {
      if(str[i] != str[len-1-i])
      {
        isPalindrome = false;
        break;
      }
    }
    if(isPalindrome)
      printf("String is a palindrome!\n");
    else
      printf("String is NOT a palindrome!\n");    
}
