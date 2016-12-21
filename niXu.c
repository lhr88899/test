#include<stdio.h>

char * main()
{
   char *src="abcde";
   char a[10]="abcde";
   src[0]='v';
   int n;
   int len=strlen(src);
   printf("%d\n",len);
   scanf("%d\n",&n);
   char dst[len];
   return dst;
}
