#include<stdio.h>
int main()
{
    union{
    int a;
    char b[4];
    }*p,u;
    p = &u;
    p->b[0]=0x12;
    p->b[1]=0x34;
    p->b[2]=0x56;
    p->b[3]=0x78;
    
    printf("a:0x%x",p->a);
}
