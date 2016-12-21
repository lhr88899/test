#include<stdio.h>
char *memcpy1(char *src,char *dest,int len)
{
        if(src && dest)
        {
                char *p = dest;
                while(len --)
                {
                        *dest++ = *src++; 
                }
                return p;
        }
        return NULL;
}


void test()
{
  char *p="12345";
  int a=strlen(p);
   printf("a = %d",a);
  int b = strlen(p);
  printf("sizeof = %d,strlen = %d",a,b);

}

void main()
{
    test();
        char p[100]={0};
        scanf("%s",p);
        char d[100]={0};
        memcpy1(p,d,100);
  printf("%s",d);
}

