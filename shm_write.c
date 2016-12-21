#include <stdio.h>   
#include <sys/types.h>   
#include <sys/ipc.h>   
#include <sys/shm.h>   
#include <stdlib.h>  
#define BUF_SIZE 1024   
#define MYKEY 25   
int  main()  
{  
    int shmid;  
    char * shmptr;  
    key_t key;
    key = ftok(".a",0);  
    if((shmid = shmget(key,BUF_SIZE,IPC_CREAT)) ==-1)  
    {  
    printf("shmget error!\n");  
    exit(1);  
    }  
  
    if((shmptr = shmat(shmid,0,0)) == (void *)-1)  
    {  
    perror("shmat error!\n");  
    exit(1);  
    }  
  
    while(1)  
    {  
    printf("string :%s\n",shmptr);  
    sleep(3);  
    }  
  
    exit(0);  
}  
