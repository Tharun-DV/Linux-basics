#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_THREADS 2
typedef struct _thread_data_t{
    int tid;
    double stuff;
}thread_data_t;

void *thr_func(void *arg){
    thread_data_t *data = (thread_data_t*)arg;
    printf("Hello from thr_func,thread id:%d\n",data->tid);
    pthread_exit(NULL);
}
int main(int argc,char **argv){
    pthread_t thr[NUM_THREADS];
    int i,rc;
    thread_data_t thr_data[NUM_THREADS];
    for (i=0;i<NUM_THREADS;++i){
        thr_data[i].tid=i;
        if((rc=pthread_create(&thr[i],NULL,thr_func,&thr_data[i]))){
            fprintf(stderr,"Error:pthread_create,rc:%d\n",rc);
            return EXIT_FAILURE;
        }
        for(i=0;i<NUM_THREADS;++i){
            pthread_join(thr[i],NULL);
        }
        return EXIT_SUCCESS;
    }
}
