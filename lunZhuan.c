#include<stdio.h>
#include<stdlib.h>
int main()
{
   char a[10];
   char *p = malloc(10);
   int n;
   printf("input a:\n");
   scanf("%s",a);
   int len=strlen(a);
   printf("input n\n");
   scanf("%d",&n);
   memcpy(p,a+n,len-n);
   memcpy(p+len-n,a,n);
   p[len]='\0';
   printf("%s\n",p);

}
