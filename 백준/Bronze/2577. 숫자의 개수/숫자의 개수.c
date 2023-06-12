#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    long long multiply = (a * b * c);
    char num[10] = { 0 };

    sprintf(num, "%lld", multiply);

    int n[10] = { 0 };

    for (int i = 0; i < strlen(num); i++) {
        if (num[i] == '0') {
            n[0]++;
        }
        else if (num[i] == '1') {
            n[1]++;
        }
        else if (num[i] == '2') {
            n[2]++;
        }
        else if (num[i] == '3') {
            n[3]++;
        }
        else if (num[i] == '4') {
            n[4]++;
        }
        else if (num[i] == '5') {
            n[5]++;
        }
        else if (num[i] == '6') {
            n[6]++;
        }
        else if (num[i] == '7') {
            n[7]++;
        }
        else if (num[i] == '8') {
            n[8]++;
        }
        else if (num[i] == '9') {
            n[9]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", n[i]);
    }

    return 0;
}