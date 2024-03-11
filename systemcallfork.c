#include<stdio.h>
#include<unistd.h>
void main(){
 int pd;
 pd = fork();
 if(pd==0){
  printf("child process \nThe provcess id is %d \nParent id is %d \n",getpid(),getppid());
  int num,i;
  printf("Enter the limit: \n");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
   printf("%d \n",i);
  }
 }
 else if(pd>0){
 wait();
  printf("This is parent process \nProcess ID is %d \n",getpid());
  int num;
  printf("Enter the number: \n");
  scanf("%d",&num);
  if(num%2==0){
  printf("%d is even \n",num);
  }
  else{
  printf("%d is odd \n",num);
  }
 }
 else{
  printf("Fork Failed \n");
 }
}
