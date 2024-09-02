#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_Function(void *arg);
int main(){
int i,j;
pthread_t T1;//thread declaration
pthread_create(&T1, NULL,thread_Function,NULL);
pthread_join(T1,NULL);
printf("This is Main Program\n");
for(i=10;i<15;i++){
printf("%d\n",i);
sleep(2);
}
}
void *thread_Function(void *arg){
printf("Inside Thread\n");
for(int j=0;j<5;j++){
printf("%d\n",j);
sleep(1);
}
}
