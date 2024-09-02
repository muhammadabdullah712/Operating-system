#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *pthread_fun(void *arg);
int arr[3]={10,30,5};
int main(){
pthread_t T1;
void *res;
pthread_create(&T1, NULL, pthread_fun,(void *)arr);
pthread_join(T1, &res);
printf("This is Main\n");
printf("Thread pass in main:%s\n", (char *)res);
}
void *pthread_fun(void *arg){
pthread_exit("Multiplication is done\n");
int *arr=arg;
int mul=arr[0]*arr[1]*arr[2];
printf("MUL=%d\n",mul);
//pthread_exit("Mul is Completed\n");
}
