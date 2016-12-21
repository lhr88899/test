#include<stdio.h>
void main()
{
char *p;
p = (char *)malloc(10);
printf("%d\n",p);
printf("%d",++p);
}
