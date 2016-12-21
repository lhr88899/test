#include<stdio.h>

int main()
{
  int fd;
  fd = open("a.txt",0666);
  char buf[100];
  read(fd,buf,1000);
  printf("%s",buf);
}
