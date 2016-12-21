#include<stdio.h>
int Exchg2(int &x, int &y)
{
    int tmp=x; 
    x=y; 
    y=tmp; 
   print(“x=%d,y=%d/n”,x,y); 
}
void main()
{
   int a=4; 
   int b=6; 
　　 Exchg2(a,b); 
　　 Print(“a=%d,b=%d/n”, a, b); 
}
