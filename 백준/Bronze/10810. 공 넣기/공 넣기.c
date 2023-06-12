#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int box[101] = { 0 };
    int I, J, K;
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &I, &J, &K);
        int in = J - I + 1;
        for (int j = 0; j < in; j++) {
            box[I] = K;
            I++;
        }
    }

    for (int k = 1; k <= n; k++) {
        printf("%d ", box[k]);
    }

    return 0;
}