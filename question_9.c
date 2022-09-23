//9. Write a function to compare two strings.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i=0;
    char str[50];
    char str1[50];
    printf("Enter two string:\n");
    //fgets(str,50,stdin);
    gets(str);
    //fflush(stdin);
    printf("Enter 2nd string:\n");
    //fgets(str1,50,stdin);
    gets(str1);
    //printf("%d",strcmp(str,str1));
   // strlwr(str);
    //strlwr(str1);
    
    while(str[i])
    {
        if(str[i]==str1[i]);
        {         
            printf("0");
            break;
        }
        if(str[i]<str1[i])
        {
             printf("-1");
             break;
        }
        if(str[i]>str1[i])
        {
            printf("1");
            break;
        }
           
        i++;      
    }
    if(str[i]=='\0'&&str1[i]=='\0')
    printf("0");
    getch();
    return 0;
}