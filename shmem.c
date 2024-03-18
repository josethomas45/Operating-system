#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<string.h>
void main(){
key_t m;
int shmid;
m=ftok(".","s");
printf("%d\n",m);
int value= shmget( m, 2534, IPC_CREAT|0666);
printf("%d\n",value);
void  * key=shmat(value, NULL, 0);
char data[30];
printf("Enter the data:\n");
scanf("%s",data);
strcpy(key,data);
printf("%s\n",(char*)key);
int sm;
sm=shmdt(key);
if(sm==0){
printf("detached completed\n");
}
int sj=shmctl(value,IPC_RMID,NULL);
if(sj==0)
{
 printf("removed data\n");
}
}
