#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>
void* f1(){
pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,NULL);
while(1)
printf("This is THREAD 1\n");
}
void* f2(){
//pthread_setcancelstate(PTHREAD_CANCEL_ENABLE,NULL);
pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED,NULL);
while(1){
for(int i=0;i<2;i++){
printf("This is THREAD 2\n");
}
pthread_testcancel();
}
}
int main(){
pthread_t T1,T2;
pthread_create(&T1, NULL, &f1,NULL);
pthread_create(&T2,NULL,&f2,NULL);
sleep(5);
pthread_cancel(T1);
sleep(5);
pthread_cancel(T2);
pthread_join(T1,NULL);
pthread_join(T2,NULL);
return 0;
}

