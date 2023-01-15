#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40],str2[40];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    printf("The concatenation of the string : %s\n",strcat(str1,str2));
}