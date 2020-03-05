#include <stdio.h>
#include "test.h"
#include <pthread.h>
#include <stdlib.h>

struct sum_runner_struct {
    long long limit;
    long long answer;
};


void* sum_runner(void* arg) {
    struct sum_runner_struct *argStruct =
            (struct sum_runner_struct*) arg;

//    free(arg);
    long long sum = 0;
    for (int i = 0; i <= argStruct->limit; i++) {
        sum += i;
    }
    argStruct->answer = sum;
    pthread_exit(0);
}


int main(int argc, char ** argv) {
//    printf("Hello, World!\n");

    int input_arr[] = {4,2,3,4};
    int num_of_arg = 4;
//    struct sum_runner_struct args[num_of_arg];
    struct sum_runner_struct* args = malloc(num_of_arg * sizeof(*args));


    pthread_t tids[num_of_arg];
    
    for (int i = 0; i < num_of_arg; i++) {
        args[i].limit = input_arr[i];
        pthread_create(&tids[i], NULL, sum_runner, &args[i]);
    }

    for (int i = 0; i < num_of_arg; i++) {
        pthread_join(tids[i], NULL);
        printf("Sum is %lld\n", args[i].answer);
    }
    free (args);

    printf("%s", "fuck off");
    double a = 1.2;
    printf("%2.5f", a);


    return 0;
}
