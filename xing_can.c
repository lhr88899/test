#include<stdio.h>
void fun(char *c)
{
*c = 2;
}
int main()
{
char  a;
scanf("%c",&a);
char *p =&a;
fun(p);
puts((const char *)p);
}
