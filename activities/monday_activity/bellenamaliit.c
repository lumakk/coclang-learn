#include<stdio.h>
#include<conio.h>
#include<ctype.h> /*pointer version*/
#include<stdlib.h>
#include<string.h>



int main()
{
  char str[80], *p;
  printf("enter a string in uppercase");
  scanf("%s", str);
  printf("here's the string in lowercase:");
  p = str;
  while(*p)
  printf("%c",tolower(*p++));
  getch();
  return 1;
}