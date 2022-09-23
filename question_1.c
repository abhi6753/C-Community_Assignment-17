//1. Write a program to calculate the length of the string. (without using builtin method)
#include<stdio.h>
#include<conio.h>
#define MAX_LENGTH 50
int main()
{
    
    char str[MAX_LENGTH];
    int i,length=0;
    printf("Enter your name:\n");
    fgets(str,MAX_LENGTH,stdin);
    for(i=0;str[i]!='\0';i++)
    {
      length++;
    }
    printf("Length of string = %d",length);
    getch();
    return 0;
}