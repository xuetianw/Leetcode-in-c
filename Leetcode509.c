//
// Created by fred on 2020-03-05.
//

int fib(int N){
    if (N == 0) return 0;
    if (N == 1) return 1;

    int arr[N + 1];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= N; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[N];
}
