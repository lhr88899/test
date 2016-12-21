#include<stdlib.h>
#include<stdio.h>
char * strc(char *,char *,int);
char * strc(char *src,char *dest,int len)
{
    char a[10]={'a','b','c'};
    char *p =&a;
    if(src && dest)
    {
        printf("%d\n",strlen(src));
        dest = (char *)malloc(len);
        printf("dest1:%d\n",dest);
    //    char *p =dest;
        while(len --)
        {
            *dest++ =*src++;
        }
        dest[len]='\0';
        printf("dest2:%d\n",dest);
        printf("dest :%d\n",p);
    }        
    return p;
    
}

int strcmp(char *src,char *dest)
{
    if(src||dest)
    {
        while(*src||*dest&&(*src ++ != *dest ++))
        {
            return 1;
        }
    }
    return 0;
}
void main()
{
char p[1000];
char *d;
scanf("%s",p);
d=strc(p,d,10);
printf("*d:%s\n",d);
}
