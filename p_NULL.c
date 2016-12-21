#include<stdio.h>
#include<stdlib.h>

void my_strlen(char *p)
{
  if(*p)
  {
    printf("p str OK:%d",p);
    printf("*p is %d",*p);
   // printf("");  
  return;
  }
    printf("pERROR:%d",p);
  return;
}
void main()
{
  char p[]="hello world";
  printf("p is :%s\n",p);
  //char a='b';
//  p=&a;
 // *p =1;
  /*p = &a;
  printf("a is %c\n",a);
  printf("a addr is %d\n",&a);
  printf("P is %d\n",p);
  printf("&P is %d\n",&p);*/
  //my_strlen(p);

}
