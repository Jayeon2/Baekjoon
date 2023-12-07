#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int people, vote;
    scanf("%d", &people);

    for (int i = 0; i < people; i++) {
        scanf("%d", &vote);
        if (vote >= 5) {
            for (int i = 0; i < (vote / 5); i++) {
                printf("++++ ");
            }
        }
        for (int i = 0; i < (vote % 5); i++) {
            printf("|");
        }
        printf("\n");
    }

    return 0;
}