#include<stdio.h>

int my_strlen(char *src)
{
  if(src)
  {
    int i=0;
    while(*src++)
    i++;
    return i;
  }
  return 0;
}

void main(int argc,char *argv[])
{
char p[10];
scanf("%s",p);
printf("len:%d\n",my_strlen(p));
}
