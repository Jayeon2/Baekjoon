#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[6];

    while (1) {
        fgets(num, sizeof(num), stdin);
        if (num[0] == '0') {
            break;
        }
        int length = strlen(num) - 1;
        int cm = 0;
        for (int i = 0; i < length; i++) {
            if (num[i] == '1') {
                cm += 2;
            }
            else if (num[i] == '0') {
                cm += 4;
            }
            else {
                cm += 3;
            }
        }
        printf("%d\n", cm + 2 + (length - 1));
    }

    return 0;
}