#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_fun(void *arg);
int main(){
int i,j;
pthread_t T1;
pthread_create(&T1,NULL,thread_fun,NULL);
pthread_join(T1,NULL);
printf("This is MAIN\n");
for(int i=10;i<15;i++){
printf("%d\n",i);
sleep(2);
}
}
void *thread_fun(void *arg){
printf("Inside Thread\n");
for(int j=0;j<5;j++){
printf("%d\n",j);
sleep(2);
}
}
