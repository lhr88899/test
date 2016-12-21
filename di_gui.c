#include<stdio.h>

/*  1 1 2 3 5 8 13 21 34 55 89
    f(n)= f(n-1)+f(n-2)  斐波拉契数列
*/

int labo(int i)
{
  if(i==1||i ==2)
  return 1;
  return labo(i-1)+labo(i-2);
}

int main()
{
  int a;
  int b;
  printf("a addr is %d",&a);
  scanf("%d",&a);  
//  b=labo(a);
  //printf("b is %d",b);
  return 0;
}
