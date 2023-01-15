#include<stdio.h>
#include<string.h>
int main()
{
    char name[40];
    printf("Enter the string:");
    gets(name);
    strrev(name);
    printf("The reverse of the string is :%s\n",name);
    return 0;

}