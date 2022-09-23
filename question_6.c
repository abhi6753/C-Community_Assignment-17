//6. Write a program to reverse a string.
#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    printf("Enter string:\n");
    fgets(str,50,stdin);
    printf("Actual string: %s",str);
    printf("reverse string: %s",strrev(str));
    getch();
    return 0;
}