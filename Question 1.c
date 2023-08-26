
#include <stdio.h>

void printSquares(int N, int M) {
    while (N > 0 && M > 0) {
        if (N >= M) {
            printf("%dx%d\n", M, M);
            N -= M;
        } else {
            printf("%dx%d\n", N, N);
            M -= N;
        }
    }
}

int main() {
    int N, M;
    printf("Enter dimensions N and M: ");
    scanf("%d %d", &N, &M);
    
    printf("Output:\n");
    printSquares(N, M);

    return 0;
}