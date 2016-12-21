#include<stdio.h>
int main()
{
   int a[10]={1,3,4,5,6,8,4};
   int * const p=a;
   printf("%d\n   ",p);
   p++;
   printf("%d",p);  
}
