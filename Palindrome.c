#include <stdio.h>

int main() {
    int N, original, reversed = 0;
    scanf("%d", &N);

    original = N;

    while (N > 0) {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }

    printf("%d\n", reversed);

    if (original == reversed)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
