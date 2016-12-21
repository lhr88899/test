#include <sys/types.h>   
#include <sys/ipc.h>   
#include <sys/shm.h>   
#include <stdio.h>   
#include <stdlib.h>  
#define BUF_SIZE 1024   
#define MYKEY 25   
int main()  
{  
    key_t key;
    char p[1024*1024]={0};
    int shmid;  
    char *shmptr;  
    key = ftok(".a",0);  
    if((shmid = shmget(key,BUF_SIZE,IPC_CREAT)) ==-1)  
    {  
    perror("shmget error \n");  
    exit(1);  
    }  
printf("%d",shmid);  
    if((shmptr =shmat(shmid,0,0))==(void *)-1)  
    {  
    perror("shmat error!\n");  
    exit(1);  
    }  
  
    while(1)  
    {  
    printf("input:");  
    scanf("%s",shmptr);  
    }  
  
    exit(0);  
}  
