//7. Write a function to calculate length of the string
#include<stdio.h>
#include<conio.h>
int strLEN(char []);
int main()
{
    char str[50];
    int length;
    printf("Enter string:\n");
    fgets(str,50,stdin); // null ko v count kiya jata hai
    length = strLEN(str);
    printf("Length of string is %d",length);
    getch();
    return 0;
}
int strLEN(char b[])

{  int i,count =0;
   for(i=0;b[i];i++)
   {
      count++;
   }
   return count;
}