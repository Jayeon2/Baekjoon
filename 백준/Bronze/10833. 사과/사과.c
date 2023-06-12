#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int student, apple, sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &student, &apple);
        if (student > apple) {
            sum += apple;
        }
        else if (apple % student == 0 || apple == student) {
            sum += 0;
        }
        else {
            sum += (apple % student);
        }
    }

    printf("%d", sum);

    return 0;
}