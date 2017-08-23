
#include<stdio.h>
#include<pthread.h>

pthread_t pid1,pid2;
pthread_mutex_t mutex;
static int value =1;
void func1()
{
  while(1)
  {
    pthread_mutex_lock(&mutex);
    printf("pid1 is %d,this is pid1 %d\n",pthread_self(),getpid());
    pthread_mutex_unlock(&mutex);
    sleep(1);
  }
}

void func2()
{
  while(1)
  {
    pthread_mutex_lock(&mutex);
    printf("pid2 is %d,this is pid2%d\n",pthread_self(),getpid());
    pthread_mutex_unlock(&mutex);
    sleep(1);
    
  }

}
void main()
{
  pthread_mutex_init(&mutex,NULL);
  pthread_create(&pid1,NULL,func1,NULL);
  printf("pid is %d\n,",getpid());
  pthread_create(&pid2,NULL,func2,NULL);
  /*
  while(1)
  {
    sleep(1);
  }
  */
  pthread_join(pid1,NULL);
  pthread_join(pid2,NULL);
  
}
