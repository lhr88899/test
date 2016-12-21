#include<stdlib.h>
#include<stdio.h>
void GetMemory1(char *p)

{

   p = (char*)malloc(100);

}
void GetMemory(char *p)  
{  
    p = (char*)malloc(100);  
}  
void main(void)

{
   char *str="adsfasdf";
   char p[10]="adsf";
//   GetMemory(str);
   strcpy(p, " world");
   printf("%s,%s",str,p);
}
