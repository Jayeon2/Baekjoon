#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char mobis[101];
    
    int M = 0, O = 0, B = 0, I = 0, S = 0;
    for (int i = 0; ; i++) {
        scanf("%c", &mobis[i]);
        if (mobis[i] == '\n') {
            break;
        }
        else if (mobis[i] == 'M') {
            M++;
        }
        else if (mobis[i] == 'O') {
            O++;
        }
        else if (mobis[i] == 'B') {
            B++;
        }
        else if (mobis[i] == 'I') {
            I++;
        }
        else if (mobis[i] == 'S') {
            S++;
        }
    }

    if (M > 0 && O > 0 && B > 0 && I > 0 && S > 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}