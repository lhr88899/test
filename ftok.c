#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>
int main()
{
  key_t semkey;
  if((semkey = ftok("./a", 1))<0)
  {
    printf("ftok failed\n");
    exit(EXIT_FAILURE);
  } 
  printf("ftok ok ,semkey = %d\n", semkey);
  return 0;
}
