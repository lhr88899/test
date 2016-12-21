#include<stdio.h>

int my_strcmp(char *src,char* dest)
{
  if(src && dest)
  {
   while(*src && *dest && *src == *dest)
      {src++;dest++;}
    return (*src -*dest);
  }
}
int main()
{
 char p[10];
 printf("input p:");
 char *d ="hello";
 scanf("%s",p);
 printf("%d",my_strcmp(p,d));
}
