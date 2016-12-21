#include<stdio.h>

void addr()
{
  printf("addr is here:");

}

int main()
{
void (*p)();
p = addr;
printf("p is %d",p);
(*p)();
}
