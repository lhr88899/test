#include<stdio.h>
#include<stdlib.h>

char *daoxu(char *src,int len)
{
  if(src !=NULL)
  {
    char b[len];
    while(len--)
    {
      b[len] = *src++;
    }
    src =b;
  }
  return NULL;
}

int main()
{
 // char *q=(char *)malloc(10);
  char p[]="hello";
  char *a=p;
  /*while(len --)
  {
    q[len]=*p++;
  } */     
  printf("a is :%d\n,p is %s,*a is %s",a,p,*a);
}
