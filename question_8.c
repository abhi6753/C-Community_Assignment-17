//8. Write a function to reverse a string.
#include<conio.h>
#include<stdio.h>
#include<string.h>
void reverse(char str[]);
int main()
{
    char str[50];
    printf("Enter string:\n");
    fgets(str,50,stdin);
    reverse(str);
    printf("Reverse string: %s",str);
    getch();
    return 0;
}
void reverse(char str[])
{
    int j=0,k;
    k=strlen(str)-2;
    while(j<k)
    {
       char temp = str[j];
       str[j]=str[k];
       str[k] = temp;
       j++;
       k--;
    }
}
