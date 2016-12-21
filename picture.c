#include<stdio.h>
#include<stdlib.h>
int main()
{
char pic_name[80]="a.jpg";
char cmd[100];
sprintf(cmd,"mspaint %s",pic_name);
system(cmd);   // 显示图片
}
